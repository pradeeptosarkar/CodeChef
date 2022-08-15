#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin >> t;

while (t--) 
{
	int n;
	cin >> n;
	
	if (n % 4 == 0) 
	{
		cout << "YES" << "\n";
		vector<int> A, B;
		for (int i = 1; i + 1 <= n; i += 2) 
		{
			if (i % 4 == 1) 
			{
				A.push_back(i);
				B.push_back(i + 1);
			}
			else 
			{
				A.push_back(i + 1);
				B.push_back(i);
			}
		}
	reverse(A.begin(), A.end());
		
		for (int i = 0; i < n / 2; i++) 
		{
			cout << A[i] << " ";
		}
		cout << "\n";
		for (int i = 0; i < n / 2; i++) 
		{
			cout << B[i] << " ";
		}
		cout << "\n";
	}
	else 
	{
	    cout << "NO" << "\n";
	}
}


	return 0;
}
