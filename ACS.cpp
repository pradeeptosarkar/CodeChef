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
    int p;
    cin>>p;
    int ans;
    if(p==0){ans=0;}
    else if(p==10){ans=10;}
    else if(p%100>9){ans=-1;}
    else{ans=p/100 + p%100;}
    
    if(ans>10)
    {ans=-1;}
    cout<<ans<<endl;
}


return 0;
}
