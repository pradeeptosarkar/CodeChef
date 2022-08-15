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
    
    if(a+b+c>=100 and a>=10 and b>=10 and c>=10){cout<<"PASS"<<endl;}
    else{cout<<"FAIL"<<endl;}
}

return 0;
}
