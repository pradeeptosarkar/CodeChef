#include <iostream>
using namespace std;


long long int help(long long int arr[], long long int i, long long int n, long long int k, long long int x)
{
    if(i>=n) 
     return 0;
    
    long long int ans=0; 
    
    if(arr[i]<arr[i-1])
    ans=1+help(arr,i+1,n,k,x);
    
    else
   { long long int temp1,temp2;
     temp1=temp2= -1;
     if(k>=(arr[i]-arr[i-1])) 
    temp1=1+help(arr,i+1,n,k-(arr[i]-arr[i-1]),x);
     if(x!=0)
    temp2=1+help(arr,i+1,n,k,x-1);
    ans=max(temp1,temp2); 
    
    if(ans== -1)
     return 0;
   }
   return ans;
}
int main() {
	
	long long int n,k,x;
	cin>>n>>k>>x;
	long long int arr[n];
	for(long long int i=0;i<n;i++)
               {cin>>arr[i];
                }
	
                   if(n==x)
	 cout<<n-1;
	 
                  else
	 {
	     long long int ans=0;
	     ans=help(arr,1,n,k,x);
	     cout<<ans;
	 }
	return 0;
}