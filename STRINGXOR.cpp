#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void display_yes(){cout<<"YES"<<endl;}
void display_no(){cout<<"NO"<<endl;}
bool truth(int n){if(n==1){return true;}else{return false;}}
void display_vec(vector<int>&vect){int n=vect.size(); for(int i=0;i<n;i++){cout<<vect[i]<<" ";}}

void solve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int t1=0,t2=0;
    
    if(a==b) {display_yes();}
    
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1') t1++;
        }
        for(int i=0;i<n-1;i++)
        {
            if(b[i]==b[i+1]) t2++;
        }
        
        if(t1==0 or t2==0) display_no();
        else display_yes();
    }
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
