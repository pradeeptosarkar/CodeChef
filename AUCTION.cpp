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
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b and a>c){cout<<"Alice"<<endl;}
    else if(b>a and b>c){cout<<"Bob"<<endl;}
    else{cout<<"Charlie"<<endl;}
    
}


return 0;
}
