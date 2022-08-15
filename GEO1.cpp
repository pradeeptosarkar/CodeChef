#include <bits/stdc++.h>
using namespace std;

struct loc
{   int x, y;
    loc(int x = 0, int y = 0) : x(x), y(y) {}
}pnt[101010];

long double operator ^ (const loc &a, const loc &b) {return (long double)a.x*b.y - (long double)a.y*b.x;}
loc operator - (const loc &a, const loc &b) {return loc(a.x-b.x, a.y-b.y);}
long double nor(const loc &a) {return sqrtl((long double)a.x*a.x + (long double)a.y*a.y);}
long double operator & (const loc &a, const loc &b) {return acosl(((long double)a.x*b.x+(long double)a.y*b.y)/nor(a)/nor(b));}

int main() 
{
    int T, n, z;
    for (cin >> T; T--; ) 
    {
        scanf("%d%d", &n, &z);
        //cin>>n>>z;
        
        for (int i = 0; i < n; i++) 
        scanf("%d%d", &pnt[i].x, &pnt[i].y);
        //cin>>pnt[i].x>>pnt[i].y;
        
        long double a = 0, b = 0, c = 0;
        pnt[n] = pnt[0]; 
        pnt[n + 1] = pnt[1];
        for (int i = 0; i < n; i++) {
            c += pnt[i] ^ pnt[i + 1];
            b += nor(pnt[i] - pnt[i + 1]);
            a += 1.0 / tanl((pnt[i] - pnt[i + 1] & pnt[i + 2] - pnt[i + 1]) * 0.5);
        }
        c = c * 0.5;
        int vtr, t;
        double x;
        while (z--) 
        {
            scanf("%d%d", &vtr, &t);
            //cin>>vtr>>t;
            
            x = (long double)vtr * t;
            printf("%.9lf\n", (double)((a * x + b) * x + c));
            //cout<<setprecision(12)<<((a*x+b)*x+c)<<"\n";
        }
    }
    return 0;
}