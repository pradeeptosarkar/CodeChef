#include <iostream>
using namespace std;

int main() {
	// your code goes here
long long int t;
cin>>t;
long long int n[t],x[t],k[t];

for(long long int i=0;i<t;i++)
{
    cin>>n[i]>>x[i]>>k[i];
}

for(long long int i=0;i<t;i++)
{
    if(x[i]%k[i]==0)
    cout<<"YES"<<endl;
    else if (((n[i]+1)-x[i])%k[i]==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
	return 0;
}
