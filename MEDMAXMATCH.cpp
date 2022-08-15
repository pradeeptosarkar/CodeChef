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
    vector<long long> a(n), b(n);
    
    for(long long i=0;i<n;i++) cin>>a[i];
    for(long long i=0;i<n;i++) cin>>b[i];
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int start=(n-1)/2;
    int end=n-1;
    
    long long median=INT_MAX;
    
    for(int i=start;i<n;i++)
    {
        median=min(median, a[i]+b[end]);
        end--;
    }
    
    cout<<median<<endl;
    
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
