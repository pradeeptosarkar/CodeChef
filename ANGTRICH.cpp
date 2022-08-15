#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a,b,c;
cin>>a>>b>>c;

if(a!=0 && b!=0 && c!=0 && (a+b+c)==180)
{
    if((a + b)>= c || (b + c)>= a || (a + c)>= b)
            cout<<"YES";
        else
            cout<<"NO";
}

else
        cout<<"NO";

	return 0;
}
