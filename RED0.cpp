#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void solve(unsigned long long x, unsigned long long y)
{
    unsigned long long ans=0, temp;
    
            while(x<y)
            {
                x*=2;
                ans++;
            }
            if(x>=y)
            {
                x/=2;
                ans--;
            }
            temp=x-(y-x);
            x-=temp;
            y-=temp;
            ans+=temp;
            x*=2;
            ans++;
            ans+=x;
            std::cout<<ans <<endl;;
}

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t;
cin>>t;

while(t--)
{
    unsigned long long x,y;
    cin>>x>>y;
    if(x>y){swap(x,y);}
    
    if(x==y){cout<<x<<endl;continue;}
    if(x==0 or y==0){cout<<-1<<endl;continue;}
    
    solve(x,y);
}

return 0;
}
