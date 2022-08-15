#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t;
cin>>t;

while(t--)
{
    long long l,r;
    cin>>l>>r;
    cout<<(r/3) - (l-1)/3<<endl;
}

	return 0;
}
