#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, x;
  cin >> n >> x;
  
  vector<int> a(n);
  for(int i=0; i<n; i++) {
  	cin >> a.at(i);
  }
  
  sort(a.begin(), a.end());
  
  int res = 0;
  for(int i=0; i<n; i++) {
  	int curr = a.at(i);
    if(i == n-1) {
    	if(x == curr) {
          res++;
        }
    } else if(curr <= x) {
      res++;
      x -= curr;
    } else {
      break;
    }
  }
  
  cout << res << endl;
}
