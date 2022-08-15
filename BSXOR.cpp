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
    int n,k,i=0;
    int Count=0,temp;
    string st;
    cin>>n>>k;
    cin>>st;
 
 while(true)
 {
  if(Count==(k-1))
  break;
  
  int temp=st[i]-'0';
  i++;
  
  if(temp==0)
  {
   Count++;
   continue;
  }
  
  for( ;i<n;i++)
  {
   temp^=(st[i]-'0');
   if(temp==0)
   {
    Count++;i++;
    break;
   }
  }
  
  if(i>=n)
  break;
 }
 
 temp=st[i++]-'0';
 for(;i<n;i++)
 temp^=(st[i]-'0');
 Count++;
 
 if(temp==0 && Count==k)
 cout<<"YES"<<endl;
 
 else
 {
 Count=0;i=0;
 while(1)
 {
  if(Count==(k-1))
  break;
  int temp=(st[i]-'0');
  i++;
  if(temp==1)
  {
   Count++;
   continue;
  }
  for(;i<n;i++)
  {
   temp^=st[i]-'0';
   if(temp==1)
   {
    Count++;i++;
    break;
   }
  }
  if(i>=n)break;
 }
 temp=st[i++]-'0';
 
 for(;i<n;i++)
 {
    temp=temp^(st[i]-'0');
 }
 Count++;
 
 if(temp==1 && Count==k)
 cout<<"YES"<<endl;
 
 else 
 cout<<"NO"<<endl;
}
}

return 0;
}
