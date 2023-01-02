#include<bits/stdc++.h>
using namespace std;
 
int main() {
  string str;
  cin >> str;
  
  int idx = 0;
  int res = 0;
  while(idx < str.size()) {
    if(str.substr(idx, 2) == "01" || str.substr(idx, 2) == "10") {
        str = str.substr(0, idx) + str.substr(idx+2);
        res += 2;
        if(idx>0) {
            idx --;
        }
        
    } else {
        idx++;
    }
  }
  
  cout << res << endl;
}
