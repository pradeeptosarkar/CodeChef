#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int odd=0;
	int even=0;
	
	for(int i=0;i<n;i++)
	{
	    if(a[i]%2==0)
	    even++;
	    
	    else
	    odd++;
	}
	
	if(even>odd)
	cout<<"READY FOR BATTLE";
	
	else
	cout<<"NOT READY";
	return 0;
}
