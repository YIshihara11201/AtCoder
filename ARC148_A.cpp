#include<bits/stdc++.h>
using namespace std;
 
int gcd_arr(vector<int> &a){
  int n = a.size();
  for(int i=n-2; i>=0; i--){
    a[i] = gcd(a[i], a[i+1]);
  }
  return a.front();
}
 
int main() {
  int n;
  cin >> n;
  
  vector<int> nums(n);
  for(int i=0; i<n; i++) {
  	cin >> nums.at(i);
  }
  
  vector<int> diffs(n-1);
  for(int i=0; i<n-1; i++) {
  	diffs.at(i) = nums.at(i+1)-nums.at(i);
  }
  
  int divisor = gcd_arr(diffs);
  int res = 2;
  if(divisor != 1) {
     res = 1;
  }
  
  cout << res << endl;
 
}
#include<bits/stdc++.h>
using namespace std;

int gcd_arr(vector<int> &a){
  int n = a.size();
  for(int i=n-2; i>=0; i--){
    a[i] = gcd(a[i], a[i+1]);
  }
  return a.front();
}

int main() {
  int n;
  cin >> n;
  
  vector<int> nums(n);
  for(int i=0; i<n; i++) {
  	cin >> nums.at(i);
  }
  
  vector<int> diffs(n-1);
  for(int i=0; i<n-1; i++) {
  	diffs.at(i) = nums.at(i+1)-nums.at(i);
  }
  
  int divisor = gcd_arr(diffs);
  int res = 2;
  if(divisor != 1) {
     res = 1;
  }
  
  cout << res << endl;

}
