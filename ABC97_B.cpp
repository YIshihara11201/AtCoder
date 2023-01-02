#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  vector<int> cand;
  cand.push_back(1);
  for(int b=2; b<=sqrt(n); b++) {
  	int p = 2;
    int curr = pow(b, p);
    while(curr<=n) {
      cand.push_back(curr);
      p++;
      curr = pow(b, p);
    }
  }
  
  sort(cand.begin(), cand.end());
  int res = *(cand.end()-1);
  
  cout << res << endl;
}
