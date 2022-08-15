//psrc template 4
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
    int b, c; 
    cin>>b>>c;
    int x=__gcd(b, c);
    cout<<c/x<<endl;
}

return 0;
}
