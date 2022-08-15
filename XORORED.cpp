#include <bits/stdc++.h>
using namespace std;

int main() {
   long long t;
   cin>>t;
   
   while(t--){
       long long n;
       cin>>n;
       long long array[n],a=0,b;
       
       for(long long i=0;i<n;i++){
           cin>>array[i];
           a|=array[i];
       }
      b=array[0]^a;
       for(long long i=1;i<n;i++){
           b|=array[i]^a;
       }
       cout<<a<<" "<<b<<"\n";
      
   }
}
