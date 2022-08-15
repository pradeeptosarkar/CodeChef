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
    long long a,b,c,a1,a2,b1,b2,c1,c2;
    cin>>a1>>a2>>b1>>b2>>c1>>c2;
    a=a1+a2;
    b=b1+b2;
    c=c1+c2;
    
    if(a>b && a>c)
    cout<<a<<endl;
    
    else if(b>a && b>c)
    cout<<b<<endl;
    
    else
    cout<<c<<endl;
    
}


return 0;
}
