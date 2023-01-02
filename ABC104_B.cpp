#include<bits/stdc++.h>
using namespace std;
 
int main() {
  string str;
  cin >> str;
  
  if(str.at(0) != 'A') {
  	cout << "WA" << endl;
    return 0;
  }
  str.at(0) = 'a';
  
  auto c_pos = find(str.begin()+2, str.end()-1, 'C');
  if(c_pos == str.end()-1) {
  	cout << "WA" << endl;
  	
    return 0;
  }
  str.at(distance(str.begin(), c_pos)) = 'c';
  
  for(int i=0; i<str.size(); i++) {
  	if(!islower(str.at(i))) {
    	cout << "WA" << endl;
    	return 0;
    }
  }
  
  cout << "AC" << endl;
}
