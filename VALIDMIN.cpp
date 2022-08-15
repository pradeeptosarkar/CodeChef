#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void display_yes(){cout<<"YES"<<endl;}
void display_no(){cout<<"NO"<<endl;}
bool truth(int n){if(n==1){return true;}else{return false;}}
void display_vec(vector<int>&vect){int n=vect.size(); for(int i=0;i<n;i++){cout<<vect[i]<<" ";}}
void display_ans(long long ans){cout<<ans<<endl;}

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    if((a==b and a<=c)or(a==c and a<=b)or(b==c and b<=a)){display_yes();}
    else{display_no();}
    
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
