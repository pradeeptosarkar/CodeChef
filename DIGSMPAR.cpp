#include<bits/stdc++.h>
using namespace std;

long long digitSum(long long n)
{
    long long sum=0;
    while(n>0)
    {
        long long temp=n%10;
        sum+=temp;
        n/=10;
    }
    return sum;
}

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
    long long sum_n=digitSum(n);
    bool ch=true;
    long long k=n, ans=n;
    while(ch)
    {
        if(digitSum(k)%2!=sum_n%2)
        {
            ans=k;
            ch=false;
        }
        else
        {
            k++;
        }
    }
    cout<<ans<<endl;
}

return 0;
}
