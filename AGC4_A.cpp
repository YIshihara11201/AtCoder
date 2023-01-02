#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int64_t a, b, c;
  cin >> a >> b >> c;
  
  int64_t max_edge = max(c, max(a, b));
  int64_t diff = max_edge%2;
  int64_t res;
  if(max_edge == a) {
  	res = diff * b * c;
  } else if(max_edge == b) {
  	res = diff * a * c;
  } else {
    res = diff * a * b;
  }
  
  cout << res << endl;
}
