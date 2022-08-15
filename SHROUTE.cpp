#include <iostream>
#include <map>

using namespace std;
#define int long long int
#define MOD 1000000007
#define max 1e9


int solve()
{   int soln;
    int i;
    int n,m; cin>>n>>m;
    int a[n];
    int b[m];
    
    for (i=0;i<n;i++) 
    {
        cin>>a[i];
        
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
            
    }
        
    map<int,int> alpha;
    
           for(i=0;i<n;i++)  
           {
               if(i==0) alpha[i]=0;
               else if (a[i]!=0) alpha[i]=0;
               
               else alpha[i]=max; 
               
           }
           
          int r=-1;
           for(i=0;i<n;i++) 
            {
               if(a[i]==1) r=i;
               if(r!=-1) 
               {
                   if(a[i]==0)
                   alpha[i]=min(alpha[i],i-r);
               }
            }
               
           int l =-1;
             for(i=n-1;i>=0;i--) 
             {
                if(a[i]==2) 
                l=i;
                
                  if(l!=-1) 
                  {
                      if(a[i]==0) 
                      alpha[i] =min(alpha[i],l-i);
                
                  }
             }
               
             for(i=0;i<m;i++)
             {
                   int j=b[i]-1;
                   if(alpha[j]!=max)
                   cout<<alpha[j]<<" ";
                   else 
                   cout<< -1<<" ";
             }
               
           
           cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int t;
    cin>>t;
    
    while(t--)
    {
      solve();
    }
    return 0;
}