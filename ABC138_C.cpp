#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  vector<double> nums(n);
  for(int i=0; i<n; i++) {
  	cin >> nums.at(i);
  }
  sort(nums.begin(), nums.end());
  
  while(nums.size()>1) {
    if(nums.size()>1){
      nums.at(0) = (nums.at(0)+nums.at(1))/2;
      nums.at(1) = nums.at(0);
    }
    nums.erase(nums.begin());
    sort(nums.begin(), nums.end());
  }
  
  cout << fixed << setprecision(7);
  cout << nums.at(0) << endl;
}
