#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t;
cin>>t;

while(t--)
{
    
    long long a,b;
    cin>>a>>b;
    
    if(a>b)
    cout<<">"<<endl;
    else if(a<b)
    cout<<"<"<<endl;
    else
    cout<<"="<<endl;
}


	return 0;
}
