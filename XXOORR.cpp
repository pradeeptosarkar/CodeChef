#include<bits/stdc++.h>
using namespace std;

void solve (vector<long long> &r,long long n)
{
    
        
    
}
int main()
{
    long long t,i,j;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(i=0;i<n;i++)
        cin>>a[i];
        
        vector<long long> bits(99,0);
        
        for(i=0;i<n;i++)
        {
            string s="";
            long long c,d=98;
            while(a[i]>0)
            {
               s+=to_string(a[i]%2);
               a[i]/=2;
            }
            long long n1=s.size();
            for(c=0;c<n1;c++)
            {
             if(s[c]=='1')
              {
                bits[d]+=1;
              }
            
              d--;
            }
        }
        long long count=0;
        for(i=0;i<99;i++)
        {
            if(bits[i]==0)
            continue;
            else if(bits[i]%k==0)
            {
                count+=(bits[i]/k);
            }
            else
            {
                count+=(bits[i]/k+1);
            }
        }
        cout<<count<<"\n";
    }

    return 0;
}