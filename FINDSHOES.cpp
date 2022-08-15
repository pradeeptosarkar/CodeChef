//psrc template 5 new
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
    int n,m;
    cin>>n>>m;
    
    if(m>=n)
    {cout<<n<<endl;
    }
    else
    {cout<<m+((n-m)*2)<<endl;
}
}

return 0;
}
