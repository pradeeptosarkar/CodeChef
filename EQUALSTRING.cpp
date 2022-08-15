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
    
    string a,b;
    cin>>a>>b;
    
    unordered_map<char, int> mp;
    int ans=0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            mp[b[i]]++;
            if(mp[b[i]]==1)
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    
}

return 0;
}
