class Solution {
public:
string sum(string s,int k)
{string result="";
cout<<"function enetered:";

int i=0;
    while(i<s.size())
    {int kop=0;
    int j;
        for(j=i;j<(i+k)&&j<s.size();j++)
        {
            kop=kop+s[j]-'0';
        }
    cout<<kop<<" ";
    result+=to_string(kop);
    i=i+k;
    }
    cout<<"function fincished:";
    return result;
}
    string digitSum(string s, int k) {
        string result=" ";
        while(s.size()>k)
        {
            string l=sum(s,k);
            cout<<endl<<"hello";
            s=l;
        }
        return s;
    }
};