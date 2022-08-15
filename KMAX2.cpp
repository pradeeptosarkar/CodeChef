#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t;
cin>>t;

while(t--)
{
    long n,k;
    cin>>n>>k;
    
    long long a[n],max=0,ans=0;
    
    for(long i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=max)
        {
            max=a[i];
           
        }
    }
    
    for(long i=k-1;i<n;i++)
    {
        if(a[i]==max)
        ans+=(n-i);
    }
    
    cout<<ans<<endl;
}

	return 0;
}
