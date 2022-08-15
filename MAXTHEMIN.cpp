//psrc template 5 new
#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void solve(vector<long long int> &arr, long long int k, long long int n)
{
    sort(arr.begin(), arr.end());
    
    cout<<(arr[min(k,n-1)])<<endl;
}

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;

while(t--)
{
    long long int n,k;
    cin>>n>>k;
    vector<long long int> arr(n);
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    solve(arr,k,n);
}


return 0;
}
