class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int k=n;
        int pro=1;
        while(k)
        { int d=k%10;
            sum=sum+d;
            pro=pro*d;
            k=k/10;
        }
        int l=sum+pro;
        return !(n%l);

    }
};