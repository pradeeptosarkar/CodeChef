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
    long long n, m;
    cin>>n>>m;
    vector<long long> arr(0,m);
    
    for(long long i=0;i<m;i++)
    {
        long long temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    vector<long long> ans(n);
    
    for(long long i=0;i<n;i++)
    {
        cout<<max((arr[m-1]-i),(i-arr[0]))<<" ";
    }
    
    cout<<endl;
}

return 0;
}
