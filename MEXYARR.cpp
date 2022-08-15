//psrc template 5 new
#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void solution3()
{
    long long n;
     cin>>n;
     vector<long long> bis(n);
     for(long long i=0;i<n;i++)
       cin>>bis[i];
     long long maxi=0;
     bool ccheck=true;
     for(long long i=0;i<n;i++)
     {
         if(bis[i]!=-1)
         {
             if(maxi>bis[i] or bis[i]>i+1)
              {
                  ccheck=false;
                  break;
              }
             maxi=max(bis[i],maxi);
         }  
     }
     map<long long,bool> used;
     if(ccheck)
     {
       vector<long long> ans(n,-1);
       if(bis[n-1]!=-1)
        used[bis[n-1]]=1;
        for(long long i=n-1;i>=1;i--)
         if(bis[i-1]!=-1)
         {
             if(!used[bis[i-1]])
             {
                 used[bis[i-1]]=1;
                 ans[i]=bis[i-1];
             }
         }
         long long st=0;
         for(long long i=0;i<n;i++)
          if(ans[i]==-1)
          {
              while(used[st])
               st++;
             ans[i]=st++;
          }
          for(long long i=0;i<n;i++)
           cout<<ans[i]<<" ";
           cout<<endl;
     }
     else
      cout<<-1<<endl;
}

void solution2()
{
    solution3();
}

void solution()
{
    solution2();
}

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int T;
   cin>>T;
   while(T--)
   {
     solution();
   }

return 0;
}
