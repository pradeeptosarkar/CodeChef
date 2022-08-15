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
    long long n,k,sum=0;
    cin>>n>>k;
    
    long long a[n];
    
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+n);
    
    for(long long i=0;i<k;i++)
    {
        if(a[i]<0)
        a[i]=(a[i]*-1);
    }
    
    for(long long i=0;i<n;i++)
    {
        if(a[i]>0)
        sum+=a[i];
    }
    
    cout<<sum<<"\n";
    
}

	return 0;
}
