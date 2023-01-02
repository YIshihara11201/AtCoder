#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  int cnt = 0;
  for(int i=0; i<n; i++) {
  	int curr;
    cin >> curr;
    
    while(curr>0) {  
      if(curr%2 == 0) {
        curr /= 2;
        cnt++;
      } else {
        break;
      }
    }
  }
  
  cout << cnt << endl;
}
