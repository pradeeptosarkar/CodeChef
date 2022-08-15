#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;

for(int r=1;r<=n;r++)
{
    for(int c=n;c>=1;c--)
    {
        if(c<=r)
        cout<<"*";
        
        else
        cout<<" ";
    }
    
    cout<<endl;
}


	return 0;
}
