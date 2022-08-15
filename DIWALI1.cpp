#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;

while(t--)
{
    long long p,a,b,c,x,y,B,C,ans=0;
    cin>>p>>a>>b>>c>>x>>y;
    
    B=b+a*x;
    C=c+a*y;
    
    cout<<p/(min(B,C))<<endl;
    
    //cout<<ans<<endl;
}


	return 0;
}
