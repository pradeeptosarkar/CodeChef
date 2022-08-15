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
    long long n,x,temp;
     cin>>n>>x;
     map<long long ,long long> m,check;
     
     for(int i=0;i<n;i++){
         cin>>temp;
         m[temp]++;
         check[temp]=1;
     }
     if(n==1)
     {
         cout<< 1 << " " << 0 << endl;
         continue;
     }
     
     int soln=0,operation=0;
     
     for(auto it:m)
     {
         if(it.second==n){
             soln=n;
             break;
         }
         if(it.second>=soln)
         {
             soln=it.second;
         }
     }
     if(x==0)
     {
         cout<<soln<< " " <<operation<< endl;
         continue;
     }
     for(auto it:m){
         if(check[(it.first)^x]==1)
         {
             if(it.second + m[(it.first)^x]>soln)
             {
                 soln=it.second+m[(it.first)^x];
                 operation=min(it.second,m[(it.first)^x]);
             }
             else if(it.second+m[(it.first)^x]==soln)
             {
                 if(min(it.second,m[(it.first)^x])<operation)
                 {
                     operation=min(it.second,m[(it.first)^x]);
                 }
             }
         }
     }
     
     cout<<soln<<" "<<operation<<endl;
     
     }

	return 0;
}
