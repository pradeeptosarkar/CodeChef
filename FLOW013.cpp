#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,c, tot=0;
	    cin>>a;
	    tot+=a;
	    cin>>b;
	    tot+=b;
	    cin>>c;
	    tot+=c;
	    
	    if(tot==180)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
