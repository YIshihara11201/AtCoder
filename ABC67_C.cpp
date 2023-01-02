#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  int64_t total = 0;
  int64_t curr;
  vector<int64_t> accum(n);
  for(int i=0; i<n; i++) {
  	cin >> curr;
    accum.at(i) = total+curr;
    total += curr;
  }
  
  int64_t res = abs((total-accum.at(0)) - accum.at(0));
  if(n>2) {
  	for(int i=1; i<n-1; i++) {
      int64_t currdiff = 	abs((total-accum.at(i)) - accum.at(i));
      if(currdiff<res) {
          res = currdiff;
      }
    }
  }
  
  cout << res << endl;
}
