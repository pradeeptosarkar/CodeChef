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
    long long sum=0, temp;
    
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        sum+=temp;
    }
    
    int count=1;
    long long c_sum=1;
    
    while((sum-c_sum)>count)
    {
        count++;
        c_sum+=count;
        
    }
    cout<<count<<endl;
}


return 0;
}
