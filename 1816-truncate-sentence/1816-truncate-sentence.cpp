class Solution {
public:
    string truncateSentence(string s, int k) {
       string result="";
       for(auto it:s)
       {
        if(it==' ')k--;
        
        if(k==0)break;
        result=result+it;
       } 
       return result;
    }
};