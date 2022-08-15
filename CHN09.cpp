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
    char s[100];
    cin>>s;
    
    int a=0,b=0;
    for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='a') a++;
            else if(s[i]=='b') b++;
        }
        if(a>=b) 
        cout<<b<<endl;
        else 
        cout<<a<<endl;
}

	return 0;
}
