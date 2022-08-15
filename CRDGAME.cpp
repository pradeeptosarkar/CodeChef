#include<bits/stdc++.h>
using namespace std;

long long score(int n)
{
    long long ans=0;
    
    while(n)
    {
        ans+=(n%10);
        n/=10;
    }
    
    return ans;
}

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;


while(t--)
{   int A=0,B=0;

    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
    long long a,b;
    cin>>a>>b;
    if(score(a)>score(b))
    A++;
    else if(score(a)<score(b))
    B++;
    else{A++;B++;}
    }
    
    if(A>B)
    cout<<0<<" "<<A<<endl;
    else if(B>A)
    cout<<1<<" "<<B<<endl;
    else
    cout<<2<<" "<<A<<endl;
}

	return 0;
}
