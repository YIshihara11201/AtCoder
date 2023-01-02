#include<bits/stdc++.h>
using namespace std;
 
int main() {
  string s1, s2;
  cin >> s1 >> s2;
  
  string new_str;
  for(int i=0; i<s1.size(); i++) {
  	new_str = s1.substr(s1.size()-i, i) + s1.substr(0, s1.size()-i);
    if(new_str == s2) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  
  cout << "No" << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  
  string new_str;
  for(int i=0; i<s1.size(); i++) {
  	new_str = s1.substr(s1.size()-i, i) + s1.substr(0, s1.size()-i);
    if(new_str == s2) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  
  cout << "No" << endl;
}
