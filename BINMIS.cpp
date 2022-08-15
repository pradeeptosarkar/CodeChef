#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void solve()
{
    int n;
       cin>>n;

       string str;
       cin>>str;

       if(n%2==1)
        {cout<<"NO"<<endl;
}
       else if(n==2)
       {
           cout<<"YES"<<endl;

           if(str[0]==str[1])
            {cout<<"1 1"<<endl;}

           else
            {cout<<"1 2"<<endl;}
       }

       else
       {

           int cnt0=0;
           int cnt1=0;

           int t1=0;
           int t0=0;


           for(int i=0;i<n;i++)
           {
               if(str[i]=='0')
                t0++;

               else
                t1++;
           }


           if(t1==t0)
           {
               cout<<"YES"<<endl;
               cout<<"1 "<<n<<endl;
               return;
           }

           if((t0-t1)%2==1)
           {
               cout<<"NO"<<endl;
               return;
           }

           int pos=0;
           bool flag=false;

           for(int i=0;i<n;i++)
           {
               if(str[i]=='0')
                cnt0++;

               else
                cnt1++;

               if(2*(cnt1-cnt0)==t1-t0)
               {
                   flag=true;
                   pos=i;
                   break;
               }

           }

           if(flag==true)
           {
                cout<<"YES"<<endl;
                cout<<pos+2<<" "<<n<<endl;
           }

           else
           {
               cnt1=0;
               cnt0=0;

               map<int,bool> vis;
               map<int,int> check;

               for(int i=n-1;i>=0;i++)
               {
                   if(str[i]=='0')
                    cnt0++;

                   else
                    cnt1++;

                   if(vis[cnt0-cnt1]==false);
                        check[cnt0-cnt1]=i;
               }

               cnt0=0;
               cnt1=0;
               int tt=(t0-t1)/2;

               flag=false;

               for(int i=0;i<n;i++)
               {
                   if(str[i]=='0')
                    cnt0++;

                   else
                    cnt1++;

                   int p=tt+cnt1-cnt0;

                   if(vis[p]==true and check[p]>i+1)
                   {
                       flag=true;
                       cout<<"YES"<<endl;
                       cout<<i+1<<" "<<check[p]<<endl;
                       break;

                   }
               }

               if(flag==false)
               cout<<"NO"<<endl;
           }

       }

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
