#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a,b,c;
cin>>a>>b>>c;

if((a+b)>c && (a+c)>b && (b+c)>a)
{
    if(a==b && b==c)
    cout<<1;
    
    else
    {
        if(a!=b && b!=c && a!=c)
        cout<<3;
        
        else if ((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a))
        cout<<2;
    }
}

else
cout<<-1;

	return 0;
}
