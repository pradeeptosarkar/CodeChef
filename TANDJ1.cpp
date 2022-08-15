#include <iostream>
using namespace std;

int main()
{    
    int t;
    cin>>t;
    
    
    while(t--)
    {int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        
        long int r;
       if(c-a>0)
        r=c-a;
        else 
        r= a-c ;
        
        if(d-b>0)
        r+=d-b;
        else
        r+=b-d ;
         
        if(r==k || ((k-r)%2==0 && k>r))
            cout << "YES";
            
        else
            cout << "NO";
        
        cout << endl;
        
    }

	return 0;
}