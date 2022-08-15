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
   int a,b,c;
   cin>>a>>b>>c;
   
   if(c<b && c<a)
   cout<<"Alice"<<endl;
   else if(b<c && b<a)
   cout<<"Bob"<<endl;
   else
   cout<<"Draw"<<endl;
    
}


	return 0;
}
