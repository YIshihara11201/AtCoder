#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for(int i=0; i<n; i++) {
  	cin >> nums.at(i);
  }
  
  vector<int> sorted(nums);
  sort(sorted.begin(), sorted.end());
  
  int largest = *(find(sorted.begin(), sorted.end(), *(sorted.end()-1)));
  int secondLargest = *(sorted.end()-2);
  for(int i=0; i< n; i++) {
  	int curr = nums.at(i);
  	
    int res = 0;
    if(curr == largest) {
        res = secondLargest;
    } else {
        res = largest;
    }
    cout << res << endl;  
  } 
}
