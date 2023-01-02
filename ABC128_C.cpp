#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, m;
  cin >> n >> m;
  
  vector<vector<int> > bulbs(m);
  for(int i=0; i<m; i++) {
    int k;
    cin >> k;
    for(int j=0; j<k; j++) {
    	int curr;
    	cin >> curr;
	  	bulbs.at(i).push_back(curr);
    }
  }
  
  vector<int> p(m);
  for(int i=0; i<m; i++) {
    cin >> p.at(i);
  }
  
  int res = 0;
  for(int tmp=0; tmp<(1<<n); tmp++) {
  	bitset<10> s(tmp);
  	bool all_lit = true;
    for(int i=0; i<m; i++) {
      vector<int> bulb = bulbs.at(i); 
      int cnt = 0;
      for(int j=0; j<bulb.size(); j++) {
      	if(s.test(bulb.at(j)-1)) {
          cnt++;
        }
      }
      if(cnt%2 != p.at(i)) {
      	all_lit = false;
      	break;
      } 
    }
    if(all_lit) {
        res++;
    }
  }
  
  cout << res << endl;
}
