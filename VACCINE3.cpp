#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	int g[t],p[t];
	int x[t][11];
	
	for(int i=0;i<t;i++)
	{cin>>g[i]>>p[i];
	for(int j=1;j<=10;j++)
	{
	    cin>>x[i][j];
	}
	}
	
	for(int i=0;i<t;i++)
	{int prev=0,min=0,max=0,curr=0;
	    for(int j=10;j>g[i];j--)
	    {
	        prev+=x[i][j];
	    }
	    
	    min=(prev/p[i])+1;
	    
	    curr=(prev%p[i])+x[i][g[i]];
	    if(curr<=p[i])
	    max=min;
	    else if(curr%p[i]==0)
	    max=(min+(curr/p[i]))-1;
	    else
	    max=(min+(curr/p[i]));
	    cout<<min<<" "<<max<<endl;
	    
	}
	return 0;
}

