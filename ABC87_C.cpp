#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  
  int res = 0;
  for(int i=0; i<=a; i++) {
    int curr_500 = 500*i;
    if(curr_500>x) {
    	break;
    }
    for(int j=0; j<=b; j++) {
      int curr_500_100 = curr_500 + 100*j;
      if(curr_500_100 > x) {
      	break;
      }
      if((x-curr_500_100)/50 <=c && (x-curr_500_100)/50 >= 0) {
        res += 1;
      }
    }
  }
  
  cout << res << endl;
}
