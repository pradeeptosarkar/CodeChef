#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t;
cin>>t;

while(t--)
{
    int n;cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++) cin>>a[i];
vector<int>pre(n),post(n);
pre[0]= a[0];
post[n-1]=a[n-1];
for(int i=1;i<n;i++){
  pre[i]= __gcd(pre[i-1],a[i]);
}
for(int i=n-2;i>=0;i--){
  post[i]= __gcd(post[i+1],a[i]);
}
int ans=0;
for(int i=0;i<n;i++){
  int l=0,r=0;
  if(i-1>=0) l= pre[i-1];
  if(i+1<n) r= post[i+1];
  ans+= ((__gcd(l,r))!=1);
}
cout<<ans<<endl;
}


return 0;
}
