//psrc template 5 new
#include<bits/stdc++.h>
using namespace std;
#define endl "\n";


long long largest_power(long long num)
{
    num=num|(num>>1);
    num=num|(num>>2);
    num=num|(num>>4);
    num=num|(num>>8);
    num=num|(num>>16);
    
    return (num+1)>>1;
    
}
int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;

while(t--)
{
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++)
    cin>>arr[i];
    
    long long sol[35]={0};
    
    for(long long i=0;i<n;i++)
    {
        long long pwr=largest_power(arr[i]);
        long long val=log(pwr)/log(2);
        sol[val]++;
    }
    long long ans=0;
    for(long long i=0;i<35;i++)
    ans+=(sol[i]*(sol[i]-1))/2;
    
    cout<<ans<<endl;
}


return 0;
}
