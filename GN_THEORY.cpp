#include<bits/stdc++.h>
using namespace std;
#define endl "\n";


void solve2(long long n,long long q)
{
    long long u,v;
    for(int i=0;i<q;++i) 
    {
        cin>>u>>v;
        vector<pair<long long, long long>> a,b;
        
        for(long long i=2;i*i<=u;++i) 
        {
            long long x=0;
            while(u%i==0) {
                u/=i;
                x++;
            }
            if(x!=0)
                a.push_back({i,x});
        }
        if(u!=1) a.push_back({u,1});
        for(int i=2;i*i<=v;++i) {
            int x=0;
            while(v%i==0) {
                v/=i;
                x++;
            }
            if(x!=0)
                b.push_back({i,x});
        }
        if(v!=1) b.push_back({v,1});
        a.push_back({3000000000,0});
        reverse(a.begin(),a.end());
        
        b.push_back({3000000000,0});
        reverse(b.begin(),b.end());
        
        long long ans=0;
        while((a.size()+1>2)||(b.size()+1>2)) 
        {
            if(a.back().first==b.back().first) 
            {
                ans+=a.back().first*abs(a.back().second-b.back().second);
                a.pop_back();
                b.pop_back();
            }
            else if(a.back().first<b.back().first) {
                ans+=a.back().first*a.back().second;
                a.pop_back();
            } else {
                ans+=b.back().first*b.back().second;
                b.pop_back();
            }
        }
        cout <<ans<<endl;
    }
}

void solve(long long n,long long q)
{
    solve2(n,q);
}

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t;
cin>>t;

while(t--)
{
    long long n,q;
    cin>>n>>q;
    
    solve(n,q);
}

return 0;
}
