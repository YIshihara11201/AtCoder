#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, m;
  cin >> n >> m;
  
  int l, r;
  int rmin = 100001;
  int lmax = 0;
  for(int i=0; i<m; i++) {
  	cin >> l >> r;
    if(r<rmin) {
      rmin = r;
    }
    if(l>lmax) {
      lmax = l;
    }
  }
  
  int res = 0;
  for(int i=1; i<=n; i++) {
  	if(i<=rmin && i>=lmax) 
      res++;
  }
  cout << res << endl;
}
