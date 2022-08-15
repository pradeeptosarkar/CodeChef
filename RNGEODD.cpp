#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int l,r,i;
cin>>l>>r;

if(l%2==1)
i=l;

else
i=l+1;

for(i;i<=r+1;i+=2)
{
    if(i<=r)
    cout<<i<<" ";
}

return 0;
}
