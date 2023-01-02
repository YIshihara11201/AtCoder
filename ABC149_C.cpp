#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int X;
  cin >> X;
  
  bool is_prime = false;
  int curr = X;
  int res = X;
  while(!is_prime) {
    is_prime = true;
    for(int i=2; i<=sqrt(curr); i++) {
    	if(curr%i == 0) {
          is_prime = false;
          break;
        }
    }
    if(is_prime) {
      res = curr;
      break;
    }
    curr++;
  }
  
  cout << res << endl;
}
