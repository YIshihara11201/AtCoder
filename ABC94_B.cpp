#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, m, x;
  cin >> n >> m >> x;
  set<int> toll;
  for(int i=0; i<m; i++) {
  	int curr;
    cin >> curr;
    toll.insert(curr);
  }
  
  int left = 0;
  for(int i=x-1; i>0; i--) {
  	if(toll.count(i)) {
    	left++;
    }
  }
    
  int right = 0;
  for(int i=x+1; i<n; i++) {
  	if(toll.count(i)) {
    	right++;
    }
  }
  
  cout << (right<left? right : left) << endl;
}
