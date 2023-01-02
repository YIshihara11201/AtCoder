#include<bits/stdc++.h>
using namespace std;
 
int main() {
  string str;
  cin >> str;
  
  int res = 754;
  for(int i=0; i<str.size()-2; i++) {
    int curr = atoi((string(1, str.at(i))+string(1, str.at(i+1))+string(1, str.at(i+2))).c_str());
    if(abs(753-curr) < res) {
      res = abs(753-curr);
    }
  }
  
  cout << res << endl;
}
