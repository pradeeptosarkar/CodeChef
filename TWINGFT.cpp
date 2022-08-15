#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {long long int i,n,k,a,b,arr[100000];
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        i = n;
        a = b = 0;
        while(k--)
        {
                i--;
                a = a + (arr[i]%1000000007);
                i--;
                b = b + (arr[i]%1000000007);
        }
               if(i!=0)
                {
                    i--;
                     b = b + (arr[i]%1000000007);
                }
        if(a>b)
        cout<<a<<endl;
        else
        cout<<b<<endl;
    }

    return 0;
}
