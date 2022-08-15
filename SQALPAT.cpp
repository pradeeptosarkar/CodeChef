#include<bits/stdc++.h>
using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,count=0;
cin>>n;

for(int i=1;i<=n;i++)
{
    if(i%2==1)
    {   if(count!=0)
        count+=5;
    
        for(int j=1;j<=5;j++)
        {
        ++count;    
        cout<<count<<" ";
        }
    }
    
    else
    {
        count+=5;
        for(int j=1;j<=5;j++)
        {
        cout<<count<<" ";
        count--;
        }
    }
    
    
    cout<<endl;
}



	return 0;
}
