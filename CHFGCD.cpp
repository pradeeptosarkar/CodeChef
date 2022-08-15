#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		
		if(__gcd(a,b)>=2)
		{
			cout<<0<<endl;
			continue;
		}
		else if ( (__gcd(a+1,b)>=2) || (__gcd(a,b+1)>=2) )
		{
			cout<<1<<endl;
			continue;
		}

		else if(__gcd(a+1,b+1)>=2)
		{
			cout<<2<<endl;
			continue;
		}
	}
	
	
	return 0;
}