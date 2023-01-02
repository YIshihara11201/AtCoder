#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, k;
  cin >> n >> k;
  
  vector<int> trees(n);
  for(int i=0; i<n; i++) {
  	cin >> trees.at(i);
  }
  
  int min_diff = 1000000001;
  sort(trees.begin(), trees.end());
  for(int i=0; i<=n-k; i++) {
    int diff = abs(trees.at(i)-trees.at(i+k-1));
    // cout << diff << endl;
  	if(diff < min_diff) {
    	min_diff = diff;
    }
    // cout << min_diff << endl;
  }
  cout << min_diff << endl;
}
