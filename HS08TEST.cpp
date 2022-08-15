#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
	float y;
	cin>>x>>y;
	
	if((x%5)!=0)
	cout<<y;
	
	else if(x<=(y-0.5))
	cout<<(y-x)-0.5;
	
	else
	cout<<y;
	return 0;
}
