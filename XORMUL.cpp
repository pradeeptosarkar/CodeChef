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
    long long n,a,b;
    cin>>n>>a>>b;
    long long ans;
    long long temp=0, maxi=0;
    for(long long i=0;i<n+1;++i)
    {
        if(i==n)
        {ans=((temp+maxi)^a);}
        
        else if((((long long)1<<i)&a)!=(((long long)1<<i)&b)){maxi=max(maxi,((long long)1<<i)); continue;}
        
        temp+=((long long)1<<i);
    }
    
    cout<<ans<<endl;
}

return 0;
}
