#include<bits/stdc++.h>
using namespace std;
 
bool dfs(vector<vector<int>> &list, int from, int to, vector<int> &res, vector<bool> &visited) {
  if(from == to) {
    res.push_back(from);
    return true;
  }
  
  visited.at(from) = true;
  
  vector<int> edge = list.at(from);
  for(int i=0; i<edge.size(); i++) {
  	int v = edge.at(i);
    if(!visited.at(v)) {
      if(dfs(list, v, to, res, visited)) {
      	res.push_back(from);
    	return true;
      }
    }
  }
  
  return false;
}
 
int main() {
  int N, X, Y;
  cin >> N >> X >> Y;
  
  vector<vector<int>> adj(1+N);
  for(int i=1; i<=N; i++) {
  	int u, v;
    cin >> u >> v;
    adj.at(u).push_back(v);
    adj.at(v).push_back(u);
  }
  
  vector<int> res;
  vector<bool> visited(1+N, false);
  dfs(adj, X, Y, res, visited);
  
  for(int i=res.size()-1; i>=0; i--) {
  	cout << res.at(i) << " ";
  }
}
