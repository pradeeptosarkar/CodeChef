#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;

while(t--)
{
    int a,b;
    cin>>a>>b;
    
    if(a>0 && b>0)
    cout<<"Solution"<<endl;
    
    else if(a==0)
    cout<<"Liquid"<<endl;
    
    else
    cout<<"Solid"<<endl;
}


	return 0;
}
