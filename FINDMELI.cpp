#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,k,yes=0,num;
cin>>n>>k;

for(int i=1;i<=n;i++)
{
    cin>>num;
    if(num==k)
    yes++;
}
if(yes>0)
cout<<1;
else
cout<<-1;

	return 0;
}
