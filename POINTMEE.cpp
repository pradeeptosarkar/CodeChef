#include<bits/stdc++.h>
using namespace std;

int check(long double h,long double k,long double x_array[],long double y_array[],int n)
{
int steps = 0;
for(int j=0;j<n;j++)
{
long double X=h-x_array[j];
long double Y=k-y_array[j];

if(X==0 && Y==0){
steps+=0;
}

else if((X==0 && Y!=0) || (X!=0 && Y==0) ){
steps+=1;
}

else if(abs(X)==abs(Y)){
steps+=1;
}

else steps+=2;
}

return steps ;
}

void solve()
{
    int n;cin>>n;

long double x_array[n],y_array[n],h,k;

for(int i=0;i<n;i++){
cin>>x_array[i];
}

for(int i=0;i<n;i++){
cin>>y_array[i];
}

int soln=INT_MAX;

for(int i=0;i<n;i++)
{
 for(int l=0;l<n;l++)
 {

  h=(x_array[i]+x_array[l])/2;
  k=(y_array[i]+y_array[l])/2;
  soln=min(soln,check(h,k,x_array,y_array,n));
  
  h = x_array[i]; 
  k = y_array[l];
  soln=min(soln,check(h,k,x_array,y_array,n));
  
  long double c1=x_array[i]+y_array[i];
  long double c2=x_array[l]-y_array[l];
  h = (c1+c2)/2;
  k = (c1-c2)/2;
  soln=min(soln,check(h,k,x_array,y_array,n));
  
  long double c3=x_array[i]+y_array[i];
  h = x_array[l];
  k = c3-h;
  soln=min(soln,check(h,k,x_array,y_array,n));
  
  long double c4=x_array[i]+y_array[i];
  k = y_array[l];
  h = c4-k;
  soln=min(soln,check(h,k,x_array,y_array,n));
  
  long double c5=x_array[i]-y_array[i];
  h = x_array[l];
  k = h-c5;
  soln=min(soln,check(h,k,x_array,y_array,n));
  
  long double c6=x_array[i]-y_array[i];
  k = y_array[l];
  h = c6+k;
  soln=min(soln,check(h,k,x_array,y_array,n));
 }
}
cout<<soln<<endl;
}


int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;

while(t--)
{
solve();
}
	return 0;
}
