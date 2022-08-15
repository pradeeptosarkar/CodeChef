#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void display_yes(){cout<<"YES";}
void display_no(){cout<<"NO";}
bool truth(int n){if(n==1){return true;}else{return false;}}
void display_vec(vector<int>&vect){int n=vect.size(); for(int i=0;i<n;i++){cout<<vect[i]<<" ";}}

void solve()
{
    long long n;
    cin>>n;
    
    vector<long long> a(n);
    for(long long i=0;i<n;i++) cin>>a[i];
    
    sort(a.begin(), a.end());
    
    long long child=0;
    long long ans=0;
    for(long long i=0; (i<n and child+a[i]<n); i++)
    {
        child+=a[i];
        ans++;
    }
    cout<<ans<<endl;
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
