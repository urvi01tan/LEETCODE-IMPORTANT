# Write your MySQL query statement below
with jt as(
    select p.user_id,p.product_id,p.quantity,pi.category,pi.price from ProductPurchases p
    JOIN ProductInfo pi
    on p.product_id=pi.product_id
     )

     select p1.product_id as "product1_id",p2.product_id as "product2_id",p1.category as "product1_category",
     p2.category as product2_category,count(distinct p1.user_id)  as customer_count from jt p1
     JOIN jt p2
     ON
     p1.user_id=p2.user_id
     where p1.product_id<p2.product_id
     
     
     group by p1.product_id,p2.product_id
     having customer_count>=3 order by customer_count desc,product1_id ,product2_id;



    


