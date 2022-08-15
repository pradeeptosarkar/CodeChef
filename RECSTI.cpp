#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    map<long long, long long> mp;
    long long i=0;
    
    while(i<n)
    {
        cin>>a[i];
        mp[a[i]]++;
        i++;
    }
    long long x=0;
    
    for(auto i:mp)
    {
        if(i.second%2!=0)
        {
            __gcd(2,3);
            x++;
        }
    }
    for(;(n+x)%4!=0;)
    {
        x++;
    }
    cout<<x<<endl;
}

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t;
cin>>t;

while(t--)
{
    solve();
}

return 0;
}
