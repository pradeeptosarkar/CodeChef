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
    int x,y;
    cin>>x>>y;
    
    if(x==y)
    cout<<(2*y)-1<<endl;
    
    else if(y==0)
    cout<<x<<endl;
    
    else
    cout<<(2*y)+(x-y)<<endl;
}

return 0;
}
