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
    long long a,b;
    cin>>a>>b;
    if(b>a){swap(a,b);}
    
    long long ans=0;
    long long diff=a-b;
    long long i=1;
    
    while(i*i<=diff)
    {
        if(diff%i==0)
        {
            if(diff/i==i){ans++;}
            else{ans+=2;}
        }
        
        i++;
    }
    
    cout<<ans<<endl;
}

return 0;
}
