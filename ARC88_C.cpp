#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int64_t a, b;
  cin >> a >> b;
  
  int res = 0;
  int64_t curr = a;
  while(curr<=b){
  	res += 1;
    curr = curr*2;
  }
  
  cout << res << endl;
}
