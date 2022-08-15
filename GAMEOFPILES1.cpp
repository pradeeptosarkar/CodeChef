#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

bool check()
{
    long long n;
    cin>>n;
    long long sum=0;
    long long ones=0;;
    while(n--)
    {
        long long temp;
        cin>>temp;
        if(temp==1)
        {
            ones++;
        }
        
        sum+=temp-2;
    }
    
    if(sum%2==1 or ones>0){return true;}
    else{return false;}
    
    
}

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;

while(t--)
{
    if (check()){cout<<"CHEF"<<endl;}
    else{cout<<"CHEFINA"<<endl;}
}

return 0;
}
