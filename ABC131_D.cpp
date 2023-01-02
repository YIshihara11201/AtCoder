#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  vector<pair<int64_t, int64_t>> A;
  
  int64_t a, b;
  for(int i=0; i<n; i++) {
    cin >> a >> b;
    A.push_back(make_pair(a, b));
  }
  
  sort(A.begin(), A.end(), [](pair<int64_t, int64_t> &a, pair<int64_t, int64_t> &b) {
  	return a.second < b.second;
  });
  
  int64_t total = 0;
  for(int i=0; i<n; i++) {
	total += A.at(i).first;
    if(total > A.at(i).second) {
      cout << "No" << endl;
      return 0;
    }
  }
  
  cout << "Yes" << endl;
}
