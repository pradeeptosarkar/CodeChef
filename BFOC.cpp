#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void solve()
{
    long long n,m,l;
    cin>>n>>m>>l;
    long long temp=(l+n)-1;
    
    for(long long i=temp;i>=l;)
    {
        if(m<=0)
            break;
        if(m>=i)
            m-=(m/i)*i;
        i=m;
    }
    cout<<m<<endl;
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
