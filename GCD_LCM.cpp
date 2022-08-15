#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void display1()
{
    cout<<1<<endl;
}

void display(long long res, long long x)
{
    cout<<res*x<<endl;
}

void solve()
{
    long long x, c;
    long long mod=100007;
    cin>>x>>c;
    
    if(c==1)
    {
        display1();
    }
    
    else
    {
        long long answer=1;
        
        for(long long r=2;r<=min(x,mod);++r)
        {
            long long tpp=0;
            while(x%r==0)
            {
                x=x/r;
                ++tpp;
            }
            tpp%=c;
            for(long long j=0;j<min(c-tpp, tpp);++j)
            {
                answer*=r;
            }
        }
        display(answer,x);
    }
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
