#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin >> n;
    int x = 0, y = 0;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
        x++;
      }
      else {
        y++;
      }
    }
    if (y == x) {
      cout << 2 * y << "\n";
    }
    else if (y < x) {
      cout << (2 * y) + 1 << "\n";
    }
    else {
      cout << (2 * x) + 1 << "\n";
    }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}