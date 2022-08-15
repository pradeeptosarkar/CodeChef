#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

long long calcSet(long long powr, long long diff)
{
    long long ans=diff + 3*powr;
    ans=3-ans/(2*powr);
    return ans;
}

long long get_power(long long n)
{
    long long ans=(long long)1;
    while(ans<=n)
    {
        ans*=(long long)2;
    }
    ans/=2;
    return ans;
}

void display(vector<long long>& ans)
{
    for(int i=0;i<3;i++){cout<<ans[i]<<" ";}
    cout<<endl;
}



int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long int t;
cin>>t;

while(t--)
{
    long long int n;
    cin>>n;
    long long int a[n+1];
    
    for(long long i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    
    long long int powr=get_power(n);
    vector<long long int> ans(3,0);
    
    while(powr>0)
    {
        long long mask=powr;
        long long diff=a[powr]-a[0];
        long long setBits=calcSet(powr,diff);
        sort(ans.begin(), ans.end());
        
        if(setBits==1)
        {
            for(long long i=0;i<3;i++)
            {
                if(ans[i]+mask<=n)
                {
                    ans[i]+=mask;
                    break;
                }
            }
        }
        
        if(setBits==2)
        {
            long long temp_cnt=0;
            for(long long i=0;i<3;i++)
            {
                if(ans[i]+mask<=n)
                {
                    temp_cnt++;
                    ans[i]+=mask;
                    if(temp_cnt==2)
                    {
                        break;
                    }
                }
            }
        }
        
        if(setBits==3)
        {
            long long i=2;
            while(i>=0)
            {
                ans[i]+=mask;
                i--;
            }
        }
        
        powr/=2;
    }
    
    display(ans);
    
}

return 0;
}
