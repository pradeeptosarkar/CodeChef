#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int andd(int p, int q, int n)
{
    p+=q;
    return p&n;
}

void display_yes()
{
    cout<<"YES"<<endl;
}

void display_no()
{
    cout<<"NO"<<endl;
}

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;

while(t--)
{
    int a1,b1,a2,b2,c,d;
    cin>>a1>>b1>>a2>>b2;
    
    c=andd(a1,b1,1);
    d=andd(a2,b2,1);
    
    if(c==d){display_yes();}
    else{display_no();}
}


return 0;
}
