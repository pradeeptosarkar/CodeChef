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
    long long b[n];
    long long sum=0;
    for(long long i=0;i<n;i++){cin>>b[i]; sum+=b[i];}
    long long diff=sum/(n+1);
    
    long long temp=abs(diff-b[0]);
    cout<<temp<<" ";
    for(long long i=1;i<n;i++)
    {
        diff=b[i]-b[i-1];
        temp+=diff;
        cout<<temp<<" ";
    }
    cout<<endl;
    
}

return 0;
}
