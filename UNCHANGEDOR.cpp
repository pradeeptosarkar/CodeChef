//psrc template 5 new
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
long long n;
cin>>n;
long long a=1, b=n;
while(a<=b)
{
    n--;
    a*=2;
}
cout<<n<<endl;
}
return 0;
}
