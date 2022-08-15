#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
    cin>>n>>m;
    string arr[n];
    ll k=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        for(auto j:arr[i])
            k^=(j-'0');
    }
    if(k==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    
}
}
