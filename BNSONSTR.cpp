#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long long t;
    cin>>t;
    
    while(t--){
         long long n;
    cin>>n;
    string s;
    cin>>s;
    long long zeroes=0;
    long long ones=0;
    for(long long i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            ones++;
        }
        else
        {
            zeroes++;
        }
    }
    vec<long long> keys;
    for(long long i=1;i<=sqrt(n);i++)
    {
        if(n%i==0){
            if(n/i==i)
            {
                keys.push_back(i);
            }
            else
            {
                keys.push_back(n/i);
                keys.push_back(i);
            }
        }
    }
    long long sol = 10000000000;
    
    for(long long fact:keys)
    {
        vec<long long> freq(fact);
        for(long long i=0;i<fact;i++){
            for(long long j=i;j<n;j+=fact){
                if(s[j]=='1'){
                    freq[i]++;
                }
            }
        }
        long long req=n/fact;
        for(long long i=0;i<fact;i++){
            long long conversion=req-freq[i];
            conversion+=(ones-freq[i]);
            sol=min(sol,conversion);
        }

    }
    cout<<sol<<endl;
    }
}

