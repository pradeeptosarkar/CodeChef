#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
int x,m,d;
for(int i=0;i<t;i++)
{
cin>>x>>m>>d;
if((x*m)<=(x+d))
cout<<x*m<<endl;
else
cout<<x+d<<endl;
}

	return 0;
}
