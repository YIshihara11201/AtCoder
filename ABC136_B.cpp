#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  int res = 0;
  for(int i=1; i<=n; i++) {
    int cnt = 0;
    int curr = i;
    while(curr>0) {
    	curr/=10;
      	cnt++;
    }
    if(cnt%2 == 1) {
    	res++;
    }
  }
  
  cout << res << endl;
}
