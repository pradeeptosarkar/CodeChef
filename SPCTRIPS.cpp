#include<bits/stdc++.h>
using namespace std;

int solution(int n)
{
    int ans=0,first,second,third;
        
        for(third=1;third<=n;third++)
        {
            for(second=third;second<=n;second+=third)
            {
                if(second%third==0)
                {
                    for(first=third;first<=n;first+=second)
                    {
                        if (first%second==third)
                        {
                            ans++;
                        }
                    }
                }
            }
        }
        return ans;
}
int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        
        cout<<solution(n)<<endl;
    }
	return 0;
}
