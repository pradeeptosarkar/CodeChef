#include<bits/stdc++.h>
using namespace std;

unordered_set<long long> primes={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

long long solve(long long n, long long a)
{
    long long summation = 0;
    for(long long i = 2; i <= a; i++){
        if(primes.find(i) != primes.end() && n % i != 0 && a % i == 0){
            summation++;
        }
    }
    return summation;
}


int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t;
cin>>t;

	while(t--){
	    long long n;
	    cin>>n;
	    if(n == 1){
	        cout<<3<<" "<<2<<endl;
	        continue;
	    }
	    if(n % 2 == 0){
	        cout<<2*n<<" "<<n<<endl;
	        continue;
	    }
	    long long check = 0;
	    for(long long i = 1; i <= 100; i++){
	        for(long long j = i + 1; j <= 100; j++){
	            if(j - i == 1 && solve(n,j) == solve(n,i)){
	                cout<<n*j<<" "<<n*i<<endl;
	                check = 1;
	                break;
	            }
	        }
	        if(check)
	            break;
	        
	    }
	    
	    
	}


	return 0;
}
