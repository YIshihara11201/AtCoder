#include<bits/stdc++.h>
using namespace std;
 
int main() {
  string str;
  cin >> str;
  
  set<char> s;
  for(int i=0; i<str.size(); i++) {
  	if(s.count(str.at(i))) {
      cout << "no" << endl;
      return 0;
    }
    s.insert(str.at(i));
  }
  
  cout << "yes" << endl;
}
