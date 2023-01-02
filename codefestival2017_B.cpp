#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  vector<int64_t> arr(n);
  
  int odd_pattern = 1;
  for(int i=0; i<n; i++) {
  	int curr;
    cin >> curr;
    if(curr%2 == 0) {
      odd_pattern*=2;
    }
  }
  
  cout << (pow(3,n)-odd_pattern) << endl;
}
