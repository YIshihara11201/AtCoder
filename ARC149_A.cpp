#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, m;
  cin >> n >> m;
  
  pair<int, int> res = {0, 0};
  for(int i=9; i>0; i--) {
    int curr = i;
  	for(int j=1; j<=n; j++) {
  	    if(j == 1) {
  	        curr = i%m;
  	    } else {
  	        curr = (curr*10+i)%m;    
  	    }
      	if(curr == 0) {
          res = max(make_pair(j, i), res);
        }
    }
  }
  
  if (res.first == 0) {
    cout << "-1" << '\n';
  } else {
    string s(res.first, '0' + res.second);
    cout << s << '\n';
  }
  
}
