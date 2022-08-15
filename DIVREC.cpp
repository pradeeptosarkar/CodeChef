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
    long long x,a,b;
    cin>>x>>a>>b;
    if(x%a==0)
    {
        //long long permute=x/a;
        long long ans=b*(x/a);
        long long sum=0;
        
        for(int i=1;i<=sqrtl(ans);i++)
        {
            if(sum>x)
            break;
            
            if(ans%i==0)
            {
                sum+=i;
                if(ans/i!=i)
                sum+=ans/i;
            }
        }
        if(sum!=x)
        cout<<-1<<endl;
        else
        cout<<ans<<endl;
    }
    else
    cout<<-1<<endl;
}


return 0;
}
