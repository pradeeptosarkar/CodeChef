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
    int n,x;
    cin>>n>>x;
    
    int ans;
    
    if(x>=n){ans=0;}
    
    else
    {
        int d=n-x;
        ans=(d/4);
        if(d%4!=0){ans++;}
    }
    cout<<ans<<endl;
}

return 0;
}
