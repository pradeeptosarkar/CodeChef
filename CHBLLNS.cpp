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
    long long r,g,b;
    cin>>r>>g>>b;
    long long k;
    cin>>k;
    
    cout<<min(r,k-1)+min(g,k-1)+min(b,k-1)+1<<endl;
}


return 0;
}
