#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> min_sofar(n, n+1);
  int minv = n+1;
  for(int i=0; i<n; i++) {
  	cin >> a.at(i);
    
    minv = min(a.at(i), minv);
    min_sofar.at(i) = minv;
  }
  
  int res = 0;
  for(int i=0; i<n; i++) {
  	if(min_sofar.at(i)>=a.at(i)) {
    	res += 1;
    }
  }
  
  cout << res << endl;
}
