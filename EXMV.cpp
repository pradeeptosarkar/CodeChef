#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

unsigned long long result(unsigned long long x, unsigned long long n)
{
    return ((8*n)/4-x)*((--x*10)/10);
}

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long  int t;
cin>>t;

while(t--)
{
    unsigned long long int x,n;
    cin>>x>>n;
    cout<<result(x,n)<<endl;
    
}

return 0;
}
