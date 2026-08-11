class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int maxi=-1e8;
        while(i<=j)
        { int area=min(height[i],height[j]);
        int k=j-i;
      //  cout<<i<<" "<<j<<":"<<":height:"<<area<<":length:"<<k<<endl;
        int a=area*k;
        //cout<<a<<endl;

            maxi=max(maxi,a);
            if(height[i]<height[j])i++;
            else
            j--;
        }
        return maxi;
    }
};