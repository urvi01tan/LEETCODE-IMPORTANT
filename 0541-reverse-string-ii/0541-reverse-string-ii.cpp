class Solution {
public:
void swa(string &s,int start,int end)
{ int i=start;
int j=end;
while(i<=j)
{
    swap(s[i],s[j]);
    i++;
    j--;
}
    return ;
}
    string reverseStr(string s, int k) {
        int last=2*k;
        int n=s.size();
      //for evey k characterssss
      int i=0;
      while(i<n)
      {
        int start=i;
        int end=i+k-1;
        if(end>=n)break;
        swa(s,start,end);
        i=end+k+1;
      }
      if(i!=n)swa(s,i,n-1);
      return s;
    }
};