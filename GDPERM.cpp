#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void display(long long n)
{
    cout<<n-3<<" "<<n-2<<" "<<n<<" "<<n-4<<" "<<n-1<<endl;
}

void display2(long long n)
{
    for(long long i=n;i>=1;i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
}

void display3()
{
    cout<<-1;
    cout<<endl;
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
    
    if((n&1) and n>=5)
    {
        for(long long i=0;i<n-5;i++)
        {
            if(i&1)
            cout<<i<<" ";
            
            else
            cout<<i+2<<" ";
        }
        display(n);
    }
    
    else if(n%2==0)
    {
        display2(n);
    }
    
    else
    {
        display3();
    }
}

return 0;
}
