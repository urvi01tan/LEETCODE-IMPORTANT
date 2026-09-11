class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        // 1 2 3 4
        set<int>st;
        /*
        1 2 3
        2 3 4

        */
        //generateeee all subset 
        int ans=0;
        int n=digits.size();
        for(int i=0;i<n;i++)
        { //int num=0;
            for(int j=0;j<n;j++)
            {
for(int k=0;k<n;k++)
{
   // number=digits[k]+number*10;
   int number=digits[i]*100+digits[j]*10+digits[k];
    if(i!=j && j!=k && i!=k && number%2==0 && number>=100){st.insert(number);}
}
            }
        }
    
    return st.size();
    }
};