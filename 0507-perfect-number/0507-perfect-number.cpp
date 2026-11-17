class Solution {
public:
    bool checkPerfectNumber(int num) {
       // int k=num/2;
        set<int>st;
        //st.insert(1);
        for(int i=1;i<num/2;i++)
        { //cout<<"hi"<<endl;
            if(num%i==0)
            {
                
                st.insert(i);
                st.insert(num/i);
            }
        }
        int re=0;
        for(auto it:st)
        re=re+it;
        re=re-num;
        if(re==num)return true;
        return false;
    }
};