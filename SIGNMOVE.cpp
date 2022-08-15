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
    long long n,ans;
    cin>>n;
    
    if(n%2==0)
    ans=n/2;
    else
    ans=((n/2)+1)*(-1);
    
    cout<<ans<<endl
}

return 0;
}
