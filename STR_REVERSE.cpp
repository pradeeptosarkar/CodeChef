//psrc template 4
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
 string s;
 cin>>s;
 string sr=s;
 reverse(s.begin(),s.end());
 int m=s.length(), n=sr.length();
 int c[256];
 memset(c,0,sizeof(c));
 for (int i=0;i<n;i++)
  {c[sr[i]]++;
  c[s[i]]--;}
 
 int ans=0;
 for (int i=n-1, j=n-1; i>=0;)
 {
  while (i>=0 && s[i]!=sr[j])
  {
   i--;
  ans++;
  }
  if (i >= 0)
  {
   i--;
   j--;
  }
 }
 cout << ans<<endl;

}


return 0;
}
