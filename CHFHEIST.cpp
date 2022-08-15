#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	
	while(t--)
	{
	    long long D,d,P,Q,n=0,money=0;
	    cin>>D>>d>>P>>Q;
	    
	    n=D/d;
	    
	    money= d*((P*n)+((n-1)*n*Q)/2);
	    
	    money+= (D%d)*(P+(n*Q));
	    
	    cout<<money<<endl;
	}
	return 0;
}
