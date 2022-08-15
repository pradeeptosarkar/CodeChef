#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t, n;
	cin >> t;
	while (t--) 
	{
		int track = 2;
		cin >> n;
		char signal[n];
		for (int i = 0; i < n; i++) 
		cin >> signal[i];
		for (int i = 0; i < n; i++) {
			if (signal[i] == 'I') {
				track = 1;
				break;
			}
			else if (signal[i] == 'Y') {
				track = 0;
				break;
			}
		}
		if (track == 2) cout << "NOT SURE" << endl;
		else if (track == 1) cout << "INDIAN" << endl;
		else cout << "NOT INDIAN" << endl;
	}
	return 0;
}
