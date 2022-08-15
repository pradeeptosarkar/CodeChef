#include<bits/stdc++.h>
using namespace std;

struct break_fast 
{
  int A, C, L, R;
} BF[100001] = {{0, 0, 0, 1000000007}};

bool yes(int n) {
	for (int i = 1; i <= n; i++) 
	if (BF[i].L > BF[i].R) return false;
	
	set<int> st;
	for (int i = 1; i <= n; i++) 
	if (BF[i].L == BF[i].R) 
	{
		if (st.count(BF[i].L)) return false;
		st.insert(BF[i].L);
	}
	return true;
}

bool is_Range(int L, int R, int a) 
{
	return L <= a && a <= R;
}

bool good(int k) 
{
	if (!is_Range(BF[k].L, BF[k].R, BF[k].A)) 
	return false;
	
	return is_Range(BF[k-1].L + 1, BF[k+1].R - 1, BF[k].A);
}

int ideal_sol(int n) 
{
	int ans = n;
	for (int i= 1; i <= n; i++) {
		if (BF[i].L != BF[i].R) continue;
		if (BF[i].A == BF[i].L) continue;
		BF[i].A = BF[i].L;
		ans ++;
	}
	set<int> tp;
	for (int i = 1; i <= n; i++) 
	if (good(i)) 
	{
		if (!tp.empty() && *--tp.end() >= BF[i].A) {
			tp.erase(tp.lower_bound(BF[i].A));
	}
		tp.insert(BF[i].A);
		if (BF[i].L != BF[i].R) continue;
		while (!tp.empty() && *--tp.end() > BF[i].A) tp.erase(--tp.end());
		ans -= tp.size();
		tp.clear();
	}
	printf("%d\n", (ans-tp.size()));
	//return ans - tp.size();
}

void input(int T)
{       int n;

        while(T--)
        {
            scanf("%d", &n);
		
		for (int i = 1; i <= n; i++) 
		{
			scanf("%d%d%d%d", &BF[i].A, &BF[i].C, &BF[i].L, &BF[i].R);
		}
		sort(BF + 1, BF + n + 1, [](break_fast a, break_fast b){return a.C < b.C;});
		BF[n + 1] = {0, 0, 0, 1000000007};
		for (int i = 2; i <= n; i++) {
			if (BF[i].L < BF[i - 1].L) BF[i].L = BF[i - 1].L;
		}
		for (int i = n - 1; i; i--) {
			if (BF[i].R > BF[i + 1].R) BF[i].R = BF[i + 1].R;
		}
		if (!yes(n)) 
		{
			puts("-1");
			continue;
		}
		
		ideal_sol(n);
		
        }
}

int main() 
{   int T;
    cin>>T;
	input(T);
	return 0;
}