#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,count=0;
cin>>n;

vector<int> a;

for(int i=1;i<=n;i++)
{
    if(n%i==0)
    {
        count++;
        a.push_back(i);
    }
}

cout<<count<<endl;
for(auto t:a) 
cout<<t<<" ";


	return 0;
}
