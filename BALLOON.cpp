#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	
	while(t--)
{
    long long n;
    cin>>n;
    long long a[n];
    
    for(long long i=0;i<n;i++)
    cin>>a[i];
    
    long long okay=0;
    long long count=0;
    long long i=0;
    while(okay!=7)
    {
        if(a[i]<=7)
        {okay++;}
        i++;
        count++;
    }
    
    cout<<count<<endl;
}
	return 0;
}
