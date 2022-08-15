#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int array[100001],forward[100001],backward[100001];
  int t;
  cin>>t;

  while(t--)
  {
      int n,sum=0,ans=0,min=LLONG_MAX;
      cin>>n;
      
      for(int i=1;i<n+1;i++)
      {
          cin>>array[i];
      }
      sort(array,array+n+1);
     
     // 
      forward[1]=array[1];backward[n]=array[n];
    for(int i=n-1;i>0;i--)
     {
       backward[i]=__gcd(backward[i+1],array[i]);
     }
    for(int i=2;i<n+1;i++)
     {
       forward[i]=__gcd(forward[i-1],array[i]);
     }
     //
     
      for(int i=1;i<n+1;i++)
      {
        sum+=array[i];
      }
      
    for(int i=1;i<n+1;i++)
      {
        ans=(sum-array[i]+__gcd(forward[i-1],backward[i+1]))/__gcd(forward[i-1],backward[i+1]);
        if(ans<min)
        min=ans;
      }
      
    cout<<min<<"\n";
  }
  
  return 0;
}