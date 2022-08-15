#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
int a,b;
int at=0,bt=0;
int amax=-1, bmax=-1;
cin>>n;

for(int i=0;i<n;i++)
{
    cin>>a>>b;
    at+=a;
    bt+=b;
    
    if(at>bt && at-bt>=amax)
    amax=at-bt;
    
    else if(bt>at && bt-at>=bmax)
    bmax=bt-at;
    
}

if(amax>bmax)
cout<<1<<" "<<amax<<endl;
else
cout<<2<<" "<<bmax<<endl;
	return 0;
}
