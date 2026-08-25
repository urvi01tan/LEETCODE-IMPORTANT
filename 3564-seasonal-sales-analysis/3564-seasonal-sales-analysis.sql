# Write your MySQL query statement below
with main as(
    select s.sale_date,s.product_id,s.quantity,s.price,p.product_name as name ,p.category ,CASE 
    WHEN MONTH(s.sale_date)=1 OR MONTH(s.sale_date)=2 OR MONTH(s.sale_date)=12 THEN "Winter"
    WHEN MONTH(s.sale_date)>2 and MONTH(s.sale_date)<=5 then "Spring"
     WHEN MONTH(s.sale_date)>5 and MONTH(s.sale_date)<=8 then "Summer"
      else "Fall"
      end as "season"
      from sales s
      JOIN products p
      on s.product_id=p.product_id

),
win as(
    select season,category,sum(quantity) as "total_quantity",sum(quantity*price) as "total_revenue" from main group by season,category having season="Winter" order by total_quantity desc,total_revenue desc,category limit 1
)
,
Summer as(
    select season,category,sum(quantity) as "total_quantity",sum(quantity*price) as "total_revenue" from main group by season,category having season="Summer" order by total_quantity desc,total_revenue desc,category limit 1 
),

Fall as(
    select season,category,sum(quantity) as "total_quantity",sum(quantity*price) as "total_revenue" from main group by season,category having season="Fall" order by total_quantity desc,total_revenue desc,category limit 1 
),
Spring as(
    select season,category,sum(quantity) as "total_quantity",sum(quantity*price) as "total_revenue" from main group by season,category having season="Spring" order by total_quantity desc,total_revenue desc,category limit 1 
)

select *from (select * from win
UNION 
select * from Fall
UNION 
SELECT * FROM Summer
UNION
SELECT * FROM Spring) t order by season;
;