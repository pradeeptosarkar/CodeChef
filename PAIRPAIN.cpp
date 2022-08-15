#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void solve()
{
    long long n;
    cin>>n;
    long long ans=0;
    long long arr[n];
    unordered_map<long long, long long> mapp;
    
    for(auto i:arr)
    cin>>i, mapp[i]++;
    
    ans+=(mapp[1]*(n-mapp[1]));
    ans+=(mapp[2]*(mapp[2]-1))/2;
    ans+=(mapp[1]*(mapp[1]-1))/2;
    
    cout<<ans<<endl;
}

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;

while(t--)
{
    solve();
}

return 0;
}
