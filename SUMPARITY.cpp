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
    long long n,a;
    cin>>n>>a;
    
    if(a&1==1)
    {
        if(n%2==0)
        cout<<"even"<<endl;
        
        else
        cout<<"odd"<<endl;
    }
    
    else
    {
        if(n==1)
        cout<<"even"<<endl;
        
        else
        cout<<"impossible"<<endl;
    }
}


return 0;
}
