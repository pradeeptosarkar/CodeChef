#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	
	while(t--)
	{
	    long long x1,x2,y1,y2,z1,z2;
	    cin>>x1>>x2>>y1>>y2>>z1>>z2;
	    if(x2>=x1 && y2>=y1 && z2<=z1)
	    cout<<"YES"<<endl;
	    
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
