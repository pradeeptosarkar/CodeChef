#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin>>t;
    
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long sum=0,maxi=INT_MIN;
        bool flag=0;
        
        for(auto i: arr)
        {
          if(i<maxi)
          {
             if(i + maxi>x)
             {
                 flag=1;
                 break;
             }
          }else maxi=i;
          
        }
        
        if(flag) {cout<<"NO"<<endl;}
        else {cout<<"YES"<<endl;}
    }
	

return 0;
}