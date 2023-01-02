#include<bits/stdc++.h>
using namespace std;
 
int64_t rec(int64_t curr) {
	if(curr==1) {
      return 1;
    }
  
  if(curr>1) {
  	return 1+ 2*rec(curr/2);
  }
}
 
int main() {
  int64_t H;
  cin >> H;
 
  int64_t res = rec(H);
  
  cout << res << endl;
}
