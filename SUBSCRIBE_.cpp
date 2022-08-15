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
    int n,x;
    cin>>n>>x;
    
    if(n%6==0){cout<<(n/6)*x<<endl;}
    else{cout<<((n/6)+1)*x<<endl;}
}

return 0;
}
