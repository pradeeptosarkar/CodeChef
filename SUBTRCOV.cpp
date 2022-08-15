#include <bits/stdc++.h>

using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>

int getFar(int node, vvi & G, int c)
{
  vector<bool> okay(c+1, false);
  int fd=-1, far; 
  okay[node] = true;
  queue<pair<int, int>> qu; qu.push({node, 0});
  while(qu.size()){
    auto pi = qu.front(); qu.pop();
    int nod = pi.first, dis = pi.second;
    if(fd < dis) fd = dis, far = nod;
    for(auto cnod: G[nod]){
      if(okay[cnod]) continue;
      okay[cnod] = true;
      qu.push({cnod, dis+1});
    }
  }
  return far;
}

void dfs(int nod, int par, vvi & G, vi & R, vi & li, int cur){
  bool isleaf = true;
  int mx = 0;
  for(auto cnod: G[nod]) if(cnod != par) {isleaf = false; mx = max(mx, R[cnod]);}
  if(isleaf){ li.push_back(cur); return; }

  int c = 0;
  for(auto cnod: G[nod]){
    if(cnod == par) continue;
    if(R[cnod] == mx && c==0){
      dfs(cnod, nod, G, R, li, cur+1); c++;
    }
    else dfs(cnod, nod, G, R, li, 1);
  }
}

void fixHeight(int nod, int par, vvi & G, vi & H){
  bool isleaf = true;
  for(auto cnod: G[nod]){
    if(cnod == par) continue;
    isleaf = false;
    fixHeight(cnod, nod, G, H);
    H[nod] = max(H[nod], 1 + H[cnod]);
  }
  if(isleaf) H[nod] = 1;
}

void breakline(int nod, int par, vvi & G, vi&li, int c){
  vector<int> R(c+1, 0);
  fixHeight(nod, par, G, R);
  dfs(nod, par, G, R, li, 1);
}

int Sol(vvi &gr, int c, int d){
  if(d==1) return 1;
  int u = getFar(1, gr, c);
  vector<int> li;
  breakline(u, 0, gr, li, c);
  sort(li.rbegin(), li.rend());
  int size = 1, total = 0, i = 0;
  while(total < d){
    size++; total += li[i++];
  }
  return size;
}


int32_t main()
{
    // your code goes here

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int t;
    cin>>t;
   
    while(t--)
    {
      int c, d, u, v;
     
    cin>>c>>d;
    vvi gr(c+1);
    for(int i=1; i<c; i++){
      cin>>u>>v;
      gr[u].push_back(v); gr[v].push_back(u);
    }
    cout <<Sol(gr, c, d) << "\n";
    }
    return 0;
}