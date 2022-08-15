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
    string s;
    cin>>s;
    
    int ans=0;
    
    if(s[0]=='0')
    ans++;
    
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]!=s[i+1])
        ans++;
    }
    
    cout<<ans<<endl;
}


	return 0;
}
