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
    long long a,b;
    cin>>a>>b;
    
    if(a==1 or b==1)
    {
        cout<<-1<<endl;
    }
    
    else if(__gcd(a,b)==1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    
}


return 0;
}
