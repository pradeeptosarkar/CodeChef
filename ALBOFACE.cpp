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
        long long n;
        cin>>n;
        if(n==1)
        {
            cout<<"Alice\n";
        }
        else
        {
            if(n&1LL)
            {
                n=n-1;
                long long a=0;
                while(n)
                {
                    long long b=0;
                    while(n%2==0)
                    n=n/2,++b;
                    n=n-1;
                    if(b>=2)
                    ++a;
                }
                if(a>=2)
                cout<<"Bob\n";
                else
                {
                    if(a==0)
                    cout<<"Alice\n";
                    else
                    cout<<"Bob\n";
                }
            }
            else
            {
                long long a=0;
                while(n)
                {
                    long long b=0;
                    while(n%2==0)
                    n=n/2,++b;
                    n=n-1;
                    if(b>=2)
                    ++a;
                }
               
                if(a>=2)
                cout<<"Alice\n";
                else
                {
                    if(a==0)
                    cout<<"Bob\n";
                    else
                    cout<<"Alice\n";
                }
            }
        }
    }

	return 0;
}
