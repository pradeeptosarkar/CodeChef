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
    vector<int> a(1001,0);
    a[0]=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a[temp]+=1;
    }
    cout<<n-(*max_element(a.begin(),a.end()))<<endl;
    
}

return 0;
}
