#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> counts(N+1);
  for(int i=1; i<=Q; i++) {
    int ans;
    cin >> ans;
    counts.at(ans) += 1;
  }
  
  for(int i=1; i<=N; i++) {
  	if(K-Q+counts.at(i)>0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}
