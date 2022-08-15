//psrc template 4
#include<bits/stdc++.h>
using namespace std;


void help()
{
    int n;
    cin >> n;

    vector<int> v(n + 2, 1);

        for (int i = 1; i <= n; i++)
        cin >> v[i];
        
        int i = 1, temp = 1;

        while (i <= n)
        {
            if (temp)
            {
                v[i] = v[i + 1] * 2;
                i += 2;
            }
            else
            {
                v[i] = v[i - 1] * 2;
                i++;
            }

            temp = 1 - temp;
        }

        for (int i = 1; i <= n; i++)
            cout << v[i] << " ";
            
        cout<<endl;
    
}
void solve()
{
    help();
}
int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t;
cin>>t;
while(t--)
{
    solve();
}

return 0;
}
