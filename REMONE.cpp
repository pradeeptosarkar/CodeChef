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
    int n;
    cin>>n;
    
    long long a[n],b[n-1],ans=INT_MAX;
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    for(int i=0;i<n-1;i++)
    cin>>b[i];
    
    sort(a,a+n);
    sort(b,b+n-1);
    
     unordered_map<long long,long long> mp;
        
        for(long long i=0; i<n-1;i++)
        {
            long long x1=b[i]-a[i];
            long long x2=b[i]-a[i+1];
            if(x1>0)    mp[x1]++;
            if(x2>0)    mp[x2]++;
            
        }
        
        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            if ((i->second)==n-1){
                ans = min(ans,(i->first));
            }
        }
        
        cout << ans << endl;
}
	return 0;
}
