#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin>>t;
  
  while(t--)
  {

      int level;
      unordered_map<int,int> elements;
      for(int i=0;i<4;i++) 
      {
          cin>>level;
          elements[level]++;
      }
      
      if(elements.size()==4|| elements.size()==3) cout<<2<<endl;
      
      else if(elements.size()==1) cout<<0<<endl;
      
      else 
      {
          for(auto level:elements)
          {
              if(level.second%2==0)cout<<2<<endl;
              else cout<<1<<endl;
              break;
          }
      }
      
  }
  return 0;
}