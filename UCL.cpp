//psrc template 5 new
#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;

while(t--)
{
    pair<pair<int, int>, string>teams[5];
    map<string, int> index;
    int start=1;
    int line=12;
    
    while(line--)
    {
        string t1,t2,vs;
        int g1,g2;
        cin>>t1>>g1>>vs>>g2>>t2;
        
        if(index[t1]<=0)
        index[t1]=start++;
        
        if(index[t2]<=0)
        index[t2]=start++;
        
        int indx1=index[t1];
        int indx2=index[t2];
        
        int points=0;
        
        teams[indx1].first.second+=g1;
        teams[indx1].first.second-=g2;
        teams[indx2].first.second+=g2;
        teams[indx2].first.second-=g1;
        
        if(g1==g2)
        teams[indx1].first.first+=1, teams[indx2].first.first+=1;
        
        else if(g1>g2)
        teams[indx1].first.first+=3;
        
        else
        teams[indx2].first.first+=3;
        
        teams[indx1].second=t1;
        teams[indx2].second=t2;
    }
    
    sort(teams, teams+5);
    string winner=teams[4].second, runnerup=teams[3].second;
    cout<<winner<<" "<<runnerup<<endl;
}

return 0;
}
