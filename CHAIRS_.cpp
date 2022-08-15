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
    int x,y;
    cin>>x>>y;
    
    if(x<y){cout<<"0"<<endl;}
    else{cout<<x-y<<endl;}
}



return 0;
}
