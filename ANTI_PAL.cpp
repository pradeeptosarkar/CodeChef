#include <bits/stdc++.h>
using namespace std;

void help()
{
    long long t;
cin>>t;

    while(t--)
    {
        long long n; 
        cin >> n;
        string s;
        cin >> s;

        if(n%2){
            cout << "NO" << endl;
            continue;
        }

        map<char, long long> freq;
        long long ans = 0;
        char c = 'a';
        for(auto x: s){
            freq[x]++;
        }
        for(auto x: freq){
            if(x.second > ans){
                ans = x.second;
                c = x.first;
            }
        }
        if(ans > (n/2)){
            cout << "NO" << endl;
            continue;
        }


        cout << "YES" << endl;

        string temp;
        for(long long i = 0; i < freq[c]; i++){
            if(temp.size() == (n/2)){
                cout << c;
            }else{
                temp.push_back(c);
            }
        }
        for(auto x: freq){
            if(x.first == c){
                continue;
            }
            for(int i = 0; i < x.second; i++){
                if(temp.size() == (n/2)){
                    cout << x.first;
                }else{
                    temp.push_back(x.first);
                }
            }
        }

        reverse(temp.begin(),  temp.end());
        cout << temp << endl;
    }
}

int main(){

help();

    return 0;
}