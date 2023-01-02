#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  int res = 0;
  for(int i=0; i<n; i++) {
  	int curr;
    cin >> curr;
    res += curr-1;
  }
  
  cout << res << endl;
}
