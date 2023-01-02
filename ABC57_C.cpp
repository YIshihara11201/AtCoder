#include<bits/stdc++.h>
using namespace std;
 
int main() {
  uint64_t n;
  cin >> n;
  
  int cnt = 0;
  uint64_t curr;
  for(uint64_t i=sqrt(n); i<=n; i--) {
  	if(n%i == 0) {
      curr = max(n/i, i);
      while(curr>0) {
      	curr/=10;
        cnt++;
      }
      break;
    }
  }
  
  cout << cnt << endl;
}
