#include <iostream>
using namespace std;

int calc(int X, int A, int B)
{
    int S,R;
    S= A+((100-X)*B);
    R=S*10;
    
    return R;
}







int main() {
	// your code goes here
	int T;
	cin>>T;
	int X[T],A[T],B[T];
	
	for(int i=0;i<T;i++)
	{cin>>X[i]>>A[i]>>B[i];
	}
	
	int R[T];
	
	for(int i=0;i<T;i++)
	{R[i]=calc(X[i], A[i], B[i]);
	}
	
	for(int i=0;i<T;i++)
	{cout<<R[i]<<endl;
	}
	return 0;
}
