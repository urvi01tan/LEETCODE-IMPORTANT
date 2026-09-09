class Solution {
public:
int fun(int i,int j,int r,int c)
{
    int x=(r-i)*(r-i)+(c-j)*(c-j);
    return x;
}
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int, int>> st;
        for (auto it : obstacles) {
            st.insert({it[0], it[1]});
        }
        int dir = 0;
        char way='N';
         int r=0;
        int c=0;
        int maxi=-1e8;
        /*
        
        N->> DR=0 DC=1*/
        int dr=0;
        int dc=1;
        for (int i = 0; i < commands.size(); i++) {
            if (commands[i] == -1) {
                dir = -1;
                if(way=='N'){dr=1;
                dc=0;
                way='E';}
                else if(way=='E'){dr=0;
                dc=-1;
                way='S';}
                else if(way=='S'){dr=-1;
                dc=0;
                way='W';}
                else if(way=='W'){dr=0;
                dc=1;
                way='N';}
                continue;
            } else if (commands[i] == -2) {
                dir = -2;   
                  if(way=='S'){dr=1;
                dc=0;
                way='E';}
                else if(way=='W'){dr=0;
                dc=-1;
                way='S';}
                else if(way=='N'){dr=-1;
                dc=0;
                way='W';}
                else if(way=='E'){dr=0;
                dc=1;
                way='N';}
                
                continue;
            } else {
                // movesss
                int moves = commands[i];
            while(moves)
            {
                int newr=r+dr;
                int newc=c+dc;
                if(st.find({newr,newc})!=st.end())
                {
                    break;
                }
                r=newr;
                c=newc;
                moves--;
            }
            }
cout<<r<<" "<<c<<endl;
int d=fun(0,0,r,c);
            maxi=max(maxi,d);
        }
        return maxi;
    }
};