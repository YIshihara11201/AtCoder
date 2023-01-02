#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, q;
  string str;
  cin >> n >> q;
  cin >> str;
  
  vector<int> dp(n);
  dp.at(0) = 0;
  for(int i=1; i<n; i++) {
  	if(str.at(i-1)=='A' && str.at(i)=='C') {
    	dp.at(i) = dp.at(i-1) + 1;
    } else {
    	dp.at(i) = dp.at(i-1);
    }
  }
  
  int l, r;
  for(int i=0; i<q; i++) {
  	cin >> l >> r;
    cout << dp.at(r-1)-dp.at(l-1) << endl;
  }
    
}
