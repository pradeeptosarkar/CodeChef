#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t;
cin>>t;

while(t--)
{
    long long n,m;
    cin>>n>>m;
    char arr[n][m];
    
    for(long long i=0;i<n;i++)
    {
        for(long long j=0;j<m;j++)
        cin>>arr[i][j];
    }
    
    long long a=0,b=0;
    
    for(long long i=0;i<n;i++)
    {
        for(long long j=0;j<m;j++)
        {
            if((i+j)%2==0 && arr[i][j]!='R')
            a+=3;
            
            else if((i+j)%2==1 and arr[i][j]!='G')
            a+=5;
            
            if((i+j)%2==0 and arr[i][j]!='G')
            b+=5;
            
            else if((i+j)%2==1 and arr[i][j]!='R')
            b+=3;
        }
    }
    cout<<min(a,b)<<endl;
}

return 0;
}
