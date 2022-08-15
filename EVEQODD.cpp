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
    long long n;
    cin>>n;
    
    vector<long long> a(2*n);
    long long odd_count=0, even_count=0;
    long long ans=0;
    
    for(long long i=0;i<2*n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0){even_count++;}
        else{odd_count++;}
    }
    
    if(odd_count==even_count){ans=0;}
    
    else if(odd_count>even_count){ans=abs(odd_count-even_count)/2;}
    
    else if (even_count>odd_count)
    {
        vector<long long> count;
        for(long long i=0;i<2*n;i++)
        {
            if(a[i]%2==0)
            {
                long long temp=0;
                while(a[i]%2==0)
                {
                    temp++; 
                    a[i]/=2;
                }
                count.push_back(temp);
            }
        }
        
        sort(count.begin(), count.end());
        long long extras=abs(n-even_count);
        
        for(auto i:count)
        {
            if(extras>0)
            {
                ans+=i;
                extras--;
            }
            else
            {
                break;
            }
        }
    }
    cout<<ans<<endl;
}

return 0;
}
