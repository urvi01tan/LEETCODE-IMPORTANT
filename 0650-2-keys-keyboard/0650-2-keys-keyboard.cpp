class Solution {
public:
//RECURSIONNNNNN
int ways(int copied,int n,int curr)
{
 if(curr==n)return 0;
 if(curr>n)return 1e8;
 int paste=1e8;
 if(copied!=0)
 paste=1+ways(copied,n,curr+copied);
 int copy=1e8;
 if(curr!=copied)
 copy=1+ways(curr,n,curr);
 return min(copy,paste);
}
    int minSteps(int n) {
        int loop=ways(0,n,1);
        cout<<loop<<endl;
        return loop;
    }
};