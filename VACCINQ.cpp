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
    int n,p,x,y,child=0,adult=0;
    cin>>n>>p>>x>>y;
    
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
        if(a[i]==0 && i<p)
        child++;
        
        else if(a[i]==1 && i<p)
        adult++;
    }
    
    cout<<(x*child)+(y*adult)<<endl;
    
    
    
}

	return 0;
}
