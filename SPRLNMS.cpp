#include <iostream>
using namespace std;

long long int sumofn(long long int a)
{
    long long int sum=0;
    for(long long int i=1;i<=a;i++)
    sum+=i;
    
    return sum;
}

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	long long int n[t], a[t];
	
	for(long long int i=0;i<t;i++)
	{
	    cin>>n[i];
	}
	
	for(long long int i=0;i<t;i++)
	{
	    if(n[i]==0 || n[i]==1)
	    a[i]=n[i];
	    
	    else
	    a[i]=(8*sumofn(n[i]-1))+n[i];
	}

for(long long int i=0;i<t;i++)
{
    cout<<a[i]<<endl;
}
	
	return 0;
}
