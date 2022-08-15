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
    long long n,k,s;
    cin>>n>>k>>s;
    
    long long sumn=(n*n);
    s-=sumn;
    long long ans=s/(k-1);
    cout<<ans<<"\n";
}



	return 0;
}
