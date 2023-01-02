#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int64_t N, A, B;
  cin >> N >> A >> B;
  
  int64_t res = 0;
  if(abs(A-B)%2 == 0) {
    res = abs(A-B)/2;
  } else {
    int64_t dist1 = N-max(A,B);
    int64_t dist2 = min(A,B)-1;
    int64_t dist = min(dist1, dist2);
    if(dist == dist1) {
      res += dist1;
    } else {
      res += dist2;
    }
    res += 1+(abs(A-B)-1)/2;
  }
 
  cout << res << endl;
}
