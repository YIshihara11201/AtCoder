#include<bits/stdc++.h>
using namespace std;
 
int64_t gcd(int64_t a, int64_t b){
    return b==0 ? a : gcd(b, a%b);
}
int64_t lcm(int64_t a, int64_t b){
    return a*b / gcd(a, b);
}
 
int main() {
  int64_t N, M;
  string S, T;
  cin >> N >> M >> S >> T;
  int64_t L = lcm(N, M);
  int64_t l = lcm(L/N, L/M);
  for(int64_t i=0; i<L; i+=l) {
    if(S.at(i/(L/N)) != T.at(i/(L/M))){
      cout << -1 << endl;
      return 0;
    }
  }
  
  cout << L << endl;
}
