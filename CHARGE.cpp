#include <bits/stdc++.h>
using namespace std;


void print(int SZ, int ans_sum, std::vector<int> Inta, std::vector<int> vtrs, std::vector<int> alpha)
{
    printf("%d\n", SZ);
		ans_sum = 0;
		for (int id : Inta) 
		if (vtrs[id]) 
		{
			printf("%d %d %d\n", id + 1, ans_sum, ans_sum + alpha[id]);
			ans_sum += alpha[id];
		}
}
int main() 
{
	int T, n;
	
	for (cin>>T;T--;) 
	{
		scanf("%d", &n);
		vector<int> alpha(n), beta(n), Inta(n), vtrs(n);
		for (int i = 0; i < n; i++) scanf("%d", &alpha[i]);
		for (int i = 0; i < n; i++) scanf("%d", &beta[i]);
		fill((vtrs).begin(), (vtrs).end(), 0);
		iota((Inta).begin(), (Inta).end(), 0);
		sort((Inta).begin(), (Inta).end(), [&beta](int u, int v) {return beta[u] < beta[v];});
		int ans_sum = 0, SZ = 0;
		multiset<pair<int, int>> s;
		for (int id : Inta) {
			s.insert(make_pair(alpha[id], id));
			vtrs[id] = true;
			if (ans_sum + alpha[id] > beta[id]) {
				auto it = --s.end();
				ans_sum = ans_sum - it -> first + alpha[id];
				vtrs[it -> second] = false;
				s.erase(it);
			} else {
				ans_sum = ans_sum + alpha[id];
				SZ ++;
			}
		}

		print(SZ,ans_sum,Inta,vtrs,alpha);
		
	}
	return 0;
}
