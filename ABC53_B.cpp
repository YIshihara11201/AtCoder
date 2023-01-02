#include<bits/stdc++.h>
using namespace std;
 
int main() {
  string str;
  cin >> str;
  
  int a_idx = -1;
  int z_idx = -1;
  for(int i=0; i<str.size(); i++) {
  	if(a_idx == -1 && str.at(i) == 'A') {
    	a_idx = i;
    } else if(str.at(i) == 'Z') {
    	z_idx = i;
    }
  }
  
  cout << z_idx-a_idx+1 << endl;
}
