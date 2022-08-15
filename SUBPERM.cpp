#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int a=0;
    int b=a+1;
    
    cin>>b;
    while (a++<b)
    {

        long long n, k;
        cin>>n>>k;

        if(n==1)
        {
            cout<<1<<endl; 
            continue;
        }

        if(k==1)
        {
            cout<<-1<<endl; 
            continue;
        }

        for(long long j=1;j<=k-1;j++)
        {
            cout<<j<<" ";
        }
        for(long long j=n;j>=k;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
return 0;
}
