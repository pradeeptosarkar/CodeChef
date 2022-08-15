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
    long long n;
    cin>>n;
    long long array[n+1];
    
    for(long long i=1;i<=n;i++)
    cin>>array[i];
    
    long long iodd,ieven,even=0,odd=0,extras=0;
    ieven=n/2;
    iodd=n-ieven;
    
    for(long long i=1;i<=n;i++)
    {
        if(array[i]%2==0)
        even++;
        
        else
        odd++;
        
    }
    
    if(odd>ieven)
    extras=odd-ieven;
    
    if(even>iodd)
    extras+=even-iodd;
    
    cout<<n-extras<<endl;
}


	return 0;
}
