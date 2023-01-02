#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b;
  string s;
  cin >> a >> b >> s;
  
  // check if s contains only one '-'
  // check if substring s1(0 to index at phypn) and s2(next to hypn , end) are length of A and B
  size_t found = s.find("-");
  if(found == std::string::npos) {
  	cout << "No" << endl;
    return 0;
  } else {
  	if(s.substr(found+1).find("-") != std::string::npos) {
      cout << "No" << endl;
      return 0;
    }
  }
  
  if(s.substr(0, found).size() == a && s.substr(found+1).size() == b) {
    cout << "Yes" << endl;
    return 0;
  }
  
  cout << "No" << endl;
  
} 
 
