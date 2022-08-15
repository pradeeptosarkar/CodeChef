#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;

while(t--)
{
int n,x,i=1,j=0;
cin>>n>>x;
int sum=n*x;

vector<int> a(n);

if(n%2!=0)
{
    a[0]=x;
    ++j;
}

while(j<n)
{
    a[j++]=(x+i);
    a[j++]=(x-i);
    ++i;
}

for(auto t:a)
{
    cout<<t<<" ";
}

cout<<endl;
}
return 0;
}
