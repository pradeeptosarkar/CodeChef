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
    long long n;
    cin>>n;
    long long temp;
    long long count_one=0;
    
    for(long long i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==1){count_one++;}
    }
    
    if(count_one==0 or count_one%2==0){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    
}

return 0;
}
