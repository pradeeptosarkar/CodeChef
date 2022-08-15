#include<bits/stdc++.h>
using namespace std;

void calculate(long long n, long long m, std::vector<std::pair<long long, long long>> master)
{
    long long lowestmultiple=1, remain=n, sum=0;
    
    for (long long i=0; i<m && remain>0; i++)
    {
        long long a= master[i].first, b=master[i].second;
        lowestmultiple = lowestmultiple*b/__gcd(lowestmultiple,b);
        sum+=(remain-n/lowestmultiple)*a;
        remain= n/lowestmultiple;
    }

    cout <<sum<<endl;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  long long int t;
  cin>>t;
  
  while(t--) 
  {
    long long n, m;
    cin>>n>>m;
    
    vector<pair<long long,long long>>master;
    
    for (long i=0;i < m;i++)
    {
      long long a,b;
      cin>>a>>b;
      master.push_back({a,b});
    }

    sort(master.begin(), master.end(), greater<pair<long,long>>());
    
    calculate(n,m,master);
    
  }
  return 0;
}