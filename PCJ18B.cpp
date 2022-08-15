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
    int n;
    cin>>n;
    int i, ans=0;
    
    for(int i=n;i>=0;i-=2)
    {
        ans+=(i*i);
    }
    cout<<ans<<endl;
}

return 0;
}
