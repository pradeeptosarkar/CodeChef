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
    int a,b,c;
    cin>>a>>b>>c;
    
    int d=c/b;
    if(c%b!=0) d++;
    
    int e=min(a,d);
    
    long long ans=0;
    
    while(e--)
    {
        if(c>b)
        {
            ans+=(b*b);
            c-=b;
        }
        else
        {
            ans+=(c*c);
        }
    }
    
    cout<<ans<<endl;
}

return 0;
}
