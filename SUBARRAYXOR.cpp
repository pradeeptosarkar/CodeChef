#include<bits/stdc++.h>
using namespace std;


long long help(int bef, int node)
{
    for(long long i=0;i<21;i++)
    {
        if((node&(1<<i))>0)
        bef^=(1<<i);
    }
    return bef;
}
int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t;
cin>>t;

while(t--)
{
    long long n;
    cin>>n;
    vector<long long> ans;
    
    map<long long,long long> mp;
    mp[0]=1;
    long long node = 1;
    long long bef = 0;
    for (long long i=0;i<n;i++){
        
        while (mp[help(bef,node)]==1){
            node++;
        }
        bef = help(bef,node);
        mp[bef]=1;
        ans.push_back(node);
        node++;
    }
    
    for (auto x:ans) cout<<x<<" ";
    cout<<endl;
}


return 0;
}
