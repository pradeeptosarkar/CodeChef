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
    long long n;
    cin>>n;
    
    long long s[n], ans=n;
    
    for(long long i=0;i<n;i++)
    {
        cin>>s[i];
        s[i]--;
    }
    
    while(s[0]!=0)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]!=0)
            {
                ans++;s[i]--;
            }
            
            else
            break;
        }
    }
    
    cout<<ans<<endl;
}

	return 0;
}
