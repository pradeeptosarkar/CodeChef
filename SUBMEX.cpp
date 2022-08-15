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
    int x,n,k,c=0;
    cin>>x>>n>>k;
    
    if(k>n)
    cout<<"-1"<<endl;
    
    else
    {
        for(int i=0;i<x;i++)
        {
            if(c==k)
            {c=0;}
            
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}


return 0;
}
