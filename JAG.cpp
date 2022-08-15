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
    long long n;
    cin>>n;
    long long array[n],count=0;
    map<long long, long long>mp;
    
    for(long long i=0;i<n;i++)
    {
        cin>>array[i];
        mp[array[i]-i-1]++;
        if(mp[array[i]-i-1]==1)
        count++;
    }
    
    
    if(mp[array[0]-1]==n)
    cout<<n<<endl;
    
    else
    cout<<1<<endl;
}


	return 0;
}
