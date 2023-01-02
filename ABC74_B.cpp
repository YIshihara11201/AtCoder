#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, k;
  cin >> n >> k;
  
  vector<int> balls(n+1, 0);
  for(int i=1; i<=n; i++) {
  	int curr;
    cin >> curr;
    balls.at(i) = curr;
  }
  
  int res = 0;
  for(int i=1; i<=n; i++) {
  	if(balls.at(i) != 0) {
    	res += min(abs(balls.at(i)-0), abs(balls.at(i)-k))*2;
    }
  }
  
  cout << res << endl;
}
