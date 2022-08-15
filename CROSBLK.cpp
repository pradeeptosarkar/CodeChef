#include<bits/stdc++.h>
using namespace std;

void solution()
{
    long long n;
    cin>>n;
    vector<long long>vect(n);
    for(long long i=0;i<n;i++)
    cin>>vect[i];
    
    long long st=vect[0];
    for(long long i=1;i<n;i++)
    {
        if(vect[i]>st)
        {
            cout<<-1<<endl;
            return;
        }
    }
    
    stack<long long>stk;
    
    for(long long i=1;i<n;i++)
    {
        while(stk.size() && stk.top()<=vect[i])
        {
            stk.pop();
        }
        stk.push(vect[i]);
    }
    long long count=0;
    
    while(!stk.empty())
    {
        count++;
        stk.pop();
    }
    cout<<count<<endl;
}

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;

while(t--)
{
    solution();
}

	return 0;
}
