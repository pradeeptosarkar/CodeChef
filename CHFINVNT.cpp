#include <iostream> 
using namespace std; 

int main() {
  int t; 
  cin >> t; 
  while(t--)
  {
    int n,p,k;
    cin>>n>>p>>k; 
    int count=0,a,b; 
    
    n--;
    
    a=p%k;
    
    b=(((n)/k)*k);
    b=n-b; 
    
    if((a-1)>b) 
    {
      count+=(b+1)*((n)/k+1)+ (a-1-b)*((n)/k);
    } 
    else 
    {
      count+=((n/k)+1)*(a); 
    }
    for(int i=a;i<=n;i+=k) 
    {
      count++; 
      if(i==p) 
      {
        cout<<count<<endl;
        break; 
      }
    }
  }
   return 0;
}