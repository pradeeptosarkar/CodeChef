#include <bits/stdc++.h>
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const ll INFL = (1LL<<62)-1;
const int INF = (1<<30)-1;
const int MAXN = 0;

ll fib[50];

int bt(int id, int val, int k){
    if(k==0){
        if(val==0)
            return 1;
        return 0;
    }
    int ret = 0;
    for(int i = id; i > 0; i--){
        if(fib[i] > val)
            continue;
        if(fib[i]*k < val)
            break;
        ret+= bt(i,val-fib[i],k-1);
    }
    return ret;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    fib[1] = 1;
    fib[2] = 2;
    int ptr = 2;
    while(fib[ptr] + fib[ptr-1] <= 1e9){
        ptr++;
        fib[ptr] = fib[ptr-1] + fib[ptr-2];
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int x, k;
        cin >> x >> k;
        cout << bt(ptr,x,k) << '\n';
    }
    
    return 0;

}