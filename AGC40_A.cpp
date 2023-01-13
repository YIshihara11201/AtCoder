#include<bits/stdc++.h>
using namespace std;

int main() {
  string seq;
  cin >> seq;
  
  int N = seq.size();
  vector<int64_t> v(N+1, 0);
  int64_t res = 0;
  
  for(int i=0; i<N; i++) {
      if(seq.at(i) == '<') {
          v.at(i+1) = v.at(i)+1;
      }
  }
  
  for(int i=N-1; i>=0; i--) {
      if(seq.at(i) == '>') {
          v.at(i) = max(v.at(i), v.at(i+1)+1);
      }
  }
  
  for(int i=0; i<=N; i++) {
      res += v.at(i);
  }
  
  cout << res << endl;
}
