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
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A'){s[i]='T';}
        else if(s[i]=='T'){s[i]='A';}
        else if(s[i]=='G'){s[i]='C';}
        else if(s[i]=='C'){s[i]='G';}
        cout<<s[i];
    }
    cout<<endl;
}

return 0;
}
