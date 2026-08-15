class Solution {
public:
    int differenceOfSums(int n, int m) {
        ///divisibleeeeeee 1->n %m
        //sum of alll n(n-1)
        int sum=0;
        int l=n*(n+1)/2;
        for(int i=1;i<=n;i++)
        {
            if(i%m==0)
            {cout<<i<<endl;
                sum=sum+i;
            }
        }
        cout<<endl<<2*sum<<" "<<l<<endl;
        return l-2*sum;
    }
};