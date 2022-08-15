#include<bits/stdc++.h>

using namespace std;


int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long n,q;

cin>>n>>q;

long long arr[n];

for(long long i=0;i<n;i++)
cin>>arr[i];

sort(arr,arr+n);

for(long long i=0;i<q;i++)
{
long long x;
cin>>x;

long long pos=lower_bound(arr,arr+n,x)-arr;

if(pos<n && arr[pos]==x)
cout<<0<<endl;

else if(pos%2==0)
cout<<"POSITIVE"<<endl;

else
cout<<"NEGATIVE"<<endl;
}


}