#include<bits/stdc++.h>
using namespace std;
 
int main() {
  string s1, s2;
  cin >> s1 >> s2;
  string res = "";
  int s1_idx = 0;
  int s2_idx = 0;
  while(s1_idx!=s1.size()||s2_idx!=s2.size()) {
  	if(s1_idx==s2_idx) {
      res += s1.at(s1_idx);
      s1_idx++;
    } else {
      res += s2.at(s2_idx);
      s2_idx++;
    }
  }
  
  cout << res << endl;
}
