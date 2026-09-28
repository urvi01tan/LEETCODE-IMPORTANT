class Solution {
public:
    int maxDepth(string s) {
        int counter=0;
        int maxi=-1e8;
        for(auto it:s)
        {
            if(it=='(')
            {
                counter++;
            }
            else if(it==')')
            {
                counter--;
            }
         //   cout<<it<<" "<<counter<<endl;
            maxi=max(maxi,counter);
        }
   
        return maxi;
    }
};