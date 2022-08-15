#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,i;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        vector<long long> A(n), B(n);
        
        for(i=0; i<n; i++){
            cin>>A[i];
        }
        
        for(i=0; i<n; i++){
            cin>>B[i];
        }
        
        vector<long long>vect;
        
        long long c,mi=INT_MAX;
        
        for(i=0; i<n; i++){
            c=A[0]+B[i];
            c=c%n;
            mi=min(mi,c);
        }
        for(i=0; i<n; i++){
            c=A[0]+B[i];
            c=c%n;
            if(c==mi){
                vect.push_back(i);
            }
        }
        if(vect.size()==1){
            long long stop = vect[0];
            long long p=0;
            
            for(long long j=stop; j<n; j++,p++){
                cout<<(A[p]+B[j])%n<<" ";
            }
            
            for(long long j=0; j<stop; j++,p++){
                cout<<(A[p]+B[j])%n<<" ";
            }
            
        }
        
        else{
            vector<long long>one;
            vector<long long>two;
            long long stop = vect[0],p=0;
            
            for(long long j=stop; j<n; j++,p++)
            {
            
                one.push_back((A[p]+B[j])%n);
            }
            for(long long j=0; j<stop; j++,p++){
                
                one.push_back((A[p]+B[j])%n);
            }
            stop=vect[1];
            p=0;
            
            for(long long j=stop; j<n; j++,p++)
            {
            
                two.push_back((A[p]+B[j])%n);
            }
            for(long long j=0; j<stop; j++,p++){
                
                two.push_back((A[p]+B[j])%n);
            }
            if(one<two){
                for(i=0; i<n; i++){
                    cout<<one[i]<<" ";
                }
            }
            else{
                for(i=0; i<n; i++){
                    cout<<two[i]<<" ";
                }
            }
        }
        cout<<"\n";
    }
}