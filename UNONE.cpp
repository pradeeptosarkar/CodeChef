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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int> e,o;
    for(auto t:a){
        if(t%2==0)
            e.push_back(t);
        else
            o.push_back(t);
    }
    while(e.size()){
        cout<<e[e.size()-1]<<" ";
        e.pop_back();
    }
    while(o.size()){
        cout<<o[o.size()-1]<<" ";
        o.pop_back();
    }
    cout<<endl;
}
	return 0;
}
