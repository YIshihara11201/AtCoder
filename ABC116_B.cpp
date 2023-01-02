#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  set<int> check;
  
  int res = 0;
  int cnt = 1;
  int curr = n;
  check.insert(n);
  while(true) {
    cnt++;
    if(curr%2==0) {
      curr /= 2;
    } else {
      curr = 3*curr+1;
    }
  
    if(check.count(curr)!=0) {
      res = cnt;
      break;
    }
    check.insert(curr);
  }
  
  cout << res << endl;
    
}
