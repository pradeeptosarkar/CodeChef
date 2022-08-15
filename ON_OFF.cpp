#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void display_yes(){cout<<"YES";}
void display_no(){cout<<"NO";}
bool truth(int n){if(n==1){return true;}else{return false;}}
void display_vec(vector<int>&vect){int n=vect.size(); for(int i=0;i<n;i++){cout<<vect[i]<<" ";}}
void display_ans(long long ans){cout<<ans<<endl;}

void solve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int ones=0;
    for(int i=0;i<n;i++)
    {
        a[i]^=b[i];
        if(a[i]==1){ones++;}
    }
    if(ones%2==0){cout<<1<<endl;}
    else{cout<<0<<endl;}
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
