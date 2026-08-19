class Solution {
public:
long long  reverse(long long a)
{
    long long h=0;
    while(a)
    {
        h=h*10+a%10;
        a=a/10;
    }
    return h;
}
    bool isSameAfterReversals(int num) {
        long long n=num;
        int sign=0;
        if(n<0)
        {
            sign=1;
            n=-1*n;
        }
        long long l=reverse(n);
        long long p=reverse(l);
        
        return p==num;
    }
};