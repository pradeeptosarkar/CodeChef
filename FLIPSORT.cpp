//psrc template 5 new
#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void display(vector<vector<int>> &solution)
{
    for(auto idx:solution)
    {
        cout<<idx[0]<<" "<<idx[1]<<endl;
    }
}

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;

while(t--)
{
    int n, temp;
    cin>>n;
    string s;
    cin>>s;
    vector<vector<int>> solution;
    
    for(int id=n-1;id>=0;id--)
    {
        if(s[id]=='0')
        {
            temp=id+1;
            for(int j=0;j<=id;j++)
            {
                if(s[j]=='1')
                {
                    s[j]='0';
                }
                else
                {
                    s[j]='1';
                }
            }
            solution.push_back({1,temp});
        }
    }
    int size=solution.size();
    cout<<size<<endl;
    
    display(solution);
    
    
}
return 0;
}
