#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t;
cin>>t;

while(t--)
{
    long long n,m;
    cin>>n>>m;
    
    if(__gcd(n,m)==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No "<<n/(__gcd(n,m))<<endl;
    }
}

return 0;
}
