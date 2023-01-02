#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, m;
  cin >> n >> m;
 
  vector<bool> color(n+1, false);
  vector<bool> cand(n+1,false);
  vector<int> balls(n+1, 1);
  color.at(1) = true;
  cand.at(1) = true;
  
  for(int i=0; i<m; i++) {
  	int x, y;
    cin >> x >> y;
    
    if(color.at(x)) {
      if(balls.at(x) == 1) {
      	cand.at(x) = false;
        color.at(x) = false;
      }
      cand.at(y) = true;
      color.at(y) = true;
    }
 
    balls.at(x)--;
    balls.at(y)++;
  }
  
  int res = count(cand.begin(), cand.end(), true);
  cout << res << endl;
}
