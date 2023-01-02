#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, d, x;
  cin >> n >> d >> x;
  
  int res = n+x;
  for(int i=0; i<n; i++) {
  	int curr;
    cin >> curr;
    res += (d-1)/curr;
  }
    
  cout << res << endl;
}
