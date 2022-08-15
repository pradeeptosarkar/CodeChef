#include <bits/stdc++.h>

using namespace std;
#define int long long
#define modulus 1000000007

int p(int j, int k, int mod){
    int result = 1;
    while(k>0){
            if(k & 1)
            result = (result*j)%mod;
            j = (j*j)%mod;
            k = k>>1;
    }
    return result;
}

void solutionprint(){
        int a; cin>>a;
        int b; cin >> b;
        int num = p(2, a, modulus) -1;
        std::cout << p(num, b, modulus) <<  ::endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    // t = 1;
    int _=1;
    while(t--)
    {
        solutionprint();
    }
    return 0;
}

