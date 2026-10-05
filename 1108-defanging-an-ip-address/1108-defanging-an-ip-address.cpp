class Solution {
public:
    string defangIPaddr(string address) {
        string k="";
        for(auto it:address)
        {
            if(it=='.')
            {
                k=k+'['+'.'+']';
            }
            else
            {
                k=k+it;
            }
        }
        return k;
    }
};