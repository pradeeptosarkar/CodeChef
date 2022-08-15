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
    int n,a,b,i=0,ans=0;
    cin>>n>>a>>b;
    
    string s;
    cin>>s;
    
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
        ans+=a;
        
        else
        ans+=b;
        
    }
    
    cout<<ans<<endl;
}

	return 0;
}
