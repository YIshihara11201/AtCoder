#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  vector<int> nums(n);
  for(int i=0; i<n; i++) {
  	cin >> nums.at(i);
  }
  
  int Alice = 0;
  int Bob = 0;
 
  for(int i=0; i<n; i++) {
    int maxC = nums.at(0);
    int maxIdx = 0;
    for(int j=1; j<n; j++) {
  		if(nums.at(j)>maxC) {
        	maxIdx = j;
          	maxC = nums.at(j);
        }
    }
    nums.at(maxIdx) = -1;
    if(i%2 == 0) {
    	Alice += maxC;
    } else {
    	Bob += maxC;
    }
  }
  
  cout << Alice - Bob << endl;
}
