#include <bits/stdc++.h>
using namespace std;

unordered_map<long long, long long> maxi;
 
 
long long solution(long long t) 
{
    if(t<12)
    return t;
        
    if(maxi.count(t) == 1) 
    {
        return maxi[t];
    }

    return maxi[t] = max(t, solution(t/2)+solution(t/3)+solution(t/4));
}
 
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
 
    long long t;
    while(cin>>t)
    {
        cout<<solution(t)<<endl;
    }
 
    return 0;
}