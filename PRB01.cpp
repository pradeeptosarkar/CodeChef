#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long a[100001];
for(long long i=0;i<100001;i++)
a[i]=1;

for (long long p=2;p*p<100001;p++)
{
    if (a[p]==1)
    {
        for(long long i=p*p;i<100001;i+=p)
        a[i]=0;
    }
}

int t;
cin>>t;

while(t--)
{
    long long n;
    cin>>n;
    
    if(a[n]==1 && n!=1)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
}



	return 0;
}
