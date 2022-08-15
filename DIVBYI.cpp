#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long int t;
cin>>t;

while(t--)
{
    long long n;
    cin>>n;
    long long prev;
    
    
    
    if(n%2==0)
    {
        prev=n/2;
    }
    else
    {
        prev=n/2+1;
    }
    cout<<prev<<" ";
    
    for(long long i=1;i<n;i++)
    {
        if((n+i)%2==0)
        {
            prev-=i;
        }
        else
        {
            prev+=i;
        }
        cout<<prev<<" ";
    }
    cout<<endl;
}


return 0;
}
