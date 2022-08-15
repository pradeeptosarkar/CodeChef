#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;

	while (t--) 
	{
	    int n; 
	    cin>>n;
	    int ogarray[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>ogarray[i];
	    }
	    
	    map<int,int>count;
	    
	    for(auto iterate:ogarray)
	    {
	        count[iterate]++;
	    }
	    
	    int solved = 0;
	    
	    for(auto newit=count.begin(); newit!=count.end(); newit++)
	    {
	        solved += min(newit->first - 1, newit->second);
	    }
	    
	    cout<<solved<<"\n";
	}
	return 0;
}

