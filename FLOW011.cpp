#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int sal;
	    cin>>sal;
	    
	    if(sal<1500)
	    cout<<2*sal<<endl;
	    
	    else
	    {
	     double s=sal;
	     double d;
	     d=(s*98.00)/100.00;
	     cout.precision(20);
	     cout<<500+(s+d)<<endl;
	    }
	}
	return 0;
}
