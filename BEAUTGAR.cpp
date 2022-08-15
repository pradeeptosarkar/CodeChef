#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t;
cin>>t;

while(t--)
{
    string s;
    cin>>s;
    s+=s[0];
    long long r=0,g=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            if(s[i]=='R') r++;
            else g++;
        }
    }
    
    if((r==0 and g==0) or (r==1 and g==1)) {cout<<"yes"<<endl;}
    else {cout<<"no"<<endl;}
}


return 0;
}
