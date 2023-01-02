#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b, k;
  cin >> a >> b >> k;
  
  vector<int> res;
  int cnt = 0;
  for(int i=1; i<=min(a, b); i++) {
  	if(a%i==0 && b%i==0) {
      cnt++;
      res.push_back(i);
    } 
  }
  
  cout << res.at(res.size()-1-(k-1)) << endl;
}
