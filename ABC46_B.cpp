#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, k;
  cin >> n >> k;
  
  int res = k;
  for(int i=1; i<n; i++) {
    res *= (k-1);
  }
  
  cout << res << endl;
}
