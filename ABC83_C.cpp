#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A, B;
  cin >> N >> A >> B;
  
  int res = 0;
  for(int i=1; i<=N; i++) {
  	int curr = i;
    int curr_sum = 0;
    while(curr>0) {
    	curr_sum += curr%10;
      	curr /= 10;
    }
    if(curr_sum>=A && curr_sum<=B) {
    	res += i;
    }
  }
  
  cout << res << endl;
}
