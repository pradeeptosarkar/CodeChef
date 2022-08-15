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
    int A=0,B=0;
    
    for(int i=0;i<5;i++)
    {
        int a,b;
        cin>>a>>b;
        A+=a;
        B+=b;
    }
    
    if(A==B)
    cout<<0<<endl;
    
    else if(A>B)
    cout<<1<<endl;
    
    else
    cout<<2<<endl;
}

	return 0;
}
