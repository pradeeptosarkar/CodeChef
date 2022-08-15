#include<bits/stdc++.h> 
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


#define int long long 


int32_t main()
{
cin.tie(0);
cout.tie(0);
ios_base::sync_with_stdio(false);
cin.tie(NULL);

 
    int t;
    cin>>t;

    while(t--)
    {
    int n;
    cin>>n;

    vector<int> a(n);

for(int i=0;i<n;i++)
cin>>a[i];

    map<int,int> count;
    
    for(int i=0;i<n;i++)
    {
        count[a[i]]++;
    }

    int ans=0;

    for(auto iterator:count){
        int temp=iterator.second;
        int difference=n-temp;

        ans+=temp*difference;
    }
 
    cout<<ans<<"\n";
    }    
}