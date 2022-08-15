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
    int n;
    cin>>n;
    
    long long s1,s2,ans=0;
    cin>>s1;
    
    while(n>1)
    {   n--;
    
        cin>>s2;
        
        if(s1>s2)
        ans+=(s1-s2-1);
        else
        ans+=(s2-s1-1);
        
        s1=s2;
        
    }
    
    cout<<ans<<"\n";
}



	return 0;
}
