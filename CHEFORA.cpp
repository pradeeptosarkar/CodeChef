#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

vector<ll> numbers(100001,0);
vector<ll> additive(100001,0);

ll Chefora(ll n)
{
    ll num=n;
    
    if(n<10)
    {
        return num;
    }
    
    else
    {
        n/=10;
        
        while(n!=0)
        {
            num=(num*10)+(n%10);
            n/=10;
        }
        
        return num;
    }
    
}

ll Power(ll b, ll p)
{
    ll ans=1;
    
    while(p!=0)
    {
        if(p%2==0)
        {
            b=((b%mod)*(b%mod))%mod;
            p/=2;
        }
        
        else
        {
            ans=((ans%mod)*(b%mod))%mod;
            p--;
        }
    }
    
    return ans;
}

int main() 
{
    
ios_base::sync_with_stdio(false);
cin.tie(NULL);

for(ll i=1;i<=100000;i++)
{
    numbers[i]=Chefora(i);
    additive[i]=additive[i-1]+numbers[i];
}

ll q;
cin>>q;

while(q--)
{
    ll l,r;
    cin>>l>>r;
    ll diff=additive[r]-additive[l];
    cout<<Power(numbers[l],diff)<<endl;
}
	return 0;
}
