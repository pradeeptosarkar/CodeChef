#include<bits/stdc++.h>
using namespace std;
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

long long res=0;

void helper(long long n)
{
  if(n<=1)
    return;

  if((n&&(!(n&(n-1))))!=1)
  {
     
   long long a= log2(n);
     a++;
     long long y=1ll<<a;
     y--;

     if(y==n)
     {
      helper(n-1);
     }
     else
     {
      long long n1= y^n;
      res+=(n-n1+1)*y;
      helper(n1-1);
     } 
  }
  else
  {
       long long a= log2(n);
     a++;
     long y=1ll<<a;
     y--;
     res+=2*y;
     helper(n-2);

  }

}

int main() 
{
long long t;
cin>>t;
while(t--) 
{
  long long n; 
  cin>>n;

helper(n);
cout<<res<<endl;
res=0;
}
}