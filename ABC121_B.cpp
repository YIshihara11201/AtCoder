#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, m, c;
  cin >> n >> m >> c;
  
  vector<int> B(m);
  for(int i=0; i<m; i++) {
  	cin >> B.at(i);
  }
  
  int res = 0;
  for(int i=0; i<n; i++) {
    int acm = 0;
    for(int j=0; j<m; j++) {
      int curr;
      cin >> curr;
      acm += curr * B.at(j);
    }
    if(acm+c>0) {
    	res++;
    }
  }
    
  cout << res << endl;
}
