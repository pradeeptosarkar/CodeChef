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
    int d,c,a1,a2,a3,b1,b2,b3;
    cin>>d>>c>>a1>>a2>>a3>>b1>>b2>>b3;
    
    int act=0;
    if(a1+a2+a3>=150)
    {act+=d;}
    if(b1+b2+b3>=150)
    {act+=d;}
    
    if(c<act)
    {cout<<"YES"<<endl;}
    else 
    {cout<<"NO"<<endl;}
    
    
}



return 0;
}
