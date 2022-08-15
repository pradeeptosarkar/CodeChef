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
int a,b,c,d,e,f,s1,s2;

cin>>a>>b>>c>>d>>e>>f;
s1=(a+b+c);
s2=(d+e+f);

if(s1>s2)
cout<<1<<endl;

else
cout<<2<<endl;
}

	return 0;
}
