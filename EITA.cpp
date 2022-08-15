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
    int d,x,y,z;
    cin>>d>>x>>y>>z;
    
    if((7*x)==((d*y)+(7-d)*z))
    cout<<7*x<<endl;
    
    else if((7*x)>((d*y)+(7-d)*z))
    cout<<7*x<<endl;
    
    else
    cout<<((d*y)+(7-d)*z)<<endl;
    
}

	return 0;
}
