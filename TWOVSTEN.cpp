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
    long long n;
    cin>>n;
    
    if(n%10==0)
    {
        cout<<0<<endl;
    }
    else if(n%5==0)
    {
        cout<<1<<endl;
    }
    else
    cout<<-1<<endl;
}


	return 0;
}
