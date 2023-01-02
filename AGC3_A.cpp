#include<bits/stdc++.h>
using namespace std;
 
int main() {
  string str;
  cin >> str;
  
  map<char, int> dict;
  for(int i=0; i<str.size(); i++) {
  	dict[str.at(i)] ++;
  }
  
  if(
    (dict['W']!=0&&dict['E']==0) 
     || (dict['W']==0&&dict['E']!=0)
     || (dict['N']!=0 && dict['S']==0)
     || (dict['N']==0 && dict['S']!=0)
    ) {
  	cout << "No" << endl;
  } else {
  	cout << "Yes" << endl;
  }
}
