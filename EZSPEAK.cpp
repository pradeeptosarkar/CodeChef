#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void display_yes(){cout<<"YES";}
void display_no(){cout<<"NO";}
bool truth(int n){if(n==1){return true;}else{return false;}}
void display_vec(vector<int>&vect){int n=vect.size(); for(int i=0;i<n;i++){cout<<vect[i]<<" ";}}

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    int temp=0;
    for(auto i:s)
    {
        if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u')
        {
            temp=0;
        }
        else
        {
            temp++;
        }
        ans=max(temp,ans);
    }
    if(ans>3){display_no();}
    else{display_yes();}
    
    cout<<endl;
}

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long int t;
cin>>t;

while(t--)
{
    solve();
}

return 0;
}
