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
    string s;
    cin>>s;
    if(s[0]-'1'>0){
        cout<<"1"<<s<<endl;
    }
    else
    cout<<s[0]<<"0"<<s.substr(1)<<endl;
}
	return 0;
}
