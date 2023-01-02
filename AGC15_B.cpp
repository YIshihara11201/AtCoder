#include<bits/stdc++.h>
using namespace std;
 
int main() {
  string btns;
  cin >> btns;
 
  int n = btns.size();
  int64_t res = 0;
  for(int i=1; i<=n; i++) {
  	if(btns.at(i-1) == 'U') {
      res += (n-i) + (i-1)*2;
    } else if(btns.at(i-1) == 'D'){
      res += (n-i)*2 + (i-1);
    }
  }
  
  cout << res << endl;
}
