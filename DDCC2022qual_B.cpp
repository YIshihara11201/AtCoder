#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  vector<int64_t> lengths(n);
  for(int i=0; i<n; i++) {
  	cin >> lengths.at(i);
  }
  
  int left_idx = 0;
  int right_idx = lengths.size()-1;
  int64_t left_total = 0;
  int64_t right_total = 0;
  while(left_idx <= right_idx) {
      if(left_total <= right_total) {
          left_total += lengths.at(left_idx);
          left_idx++;
      } else {
          right_total += lengths.at(right_idx);
          right_idx--;
      }
  }
  
  cout << abs(left_total-right_total) << endl;
  
}
