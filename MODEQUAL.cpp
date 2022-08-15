#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vect;
        int CZE;
        for(int i=0;i<n;i++){
        cin>>CZE;
        vect.push_back(CZE);}
        
        vector<int> london;
        london.assign(vect.size(),0);
        for(int i=0;i<vect.size();i++)
        {
            london[i]=(vect[i]-1)/2;
        }
        
        int count=*min_element(vect.begin(),vect.end());
        int c=0;
        for(int i=0;i<london.size();i++)
        {
            if(count==vect[i])
            c++;
        }
        int variable=0;
        for(int i=0;i<london.size();i++)
        {
            if(count!=vect[i])
            {
                if(london[i]<count)
                variable=1;
            }
        }
        
        if(variable==1)
        cout<<n<<"\n";
        else
        {
            cout<<n-c<<"\n";
        }
    }
}
