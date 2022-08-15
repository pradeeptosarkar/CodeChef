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
    vector<long long> arr;
    
    for(int i=0;i<3;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    
    sort(arr.begin(), arr.end());
    cout<<arr[1]<<endl;
}


	return 0;
}
