#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a,b,c;
cin>>a>>b>>c;

if(a+b>c && a+c>b && b+c>a)
cout<<"YES";

else
cout<<"NO";


	return 0;
}
