#include<bits/stdc++.h>
using namespace std;
 
int main() {
  string str;
  cin >> str;
  
  int res = 0;
  for(int i=0; i<str.size()-1; i++) {
  	if(str.at(i) != str.at(i+1)) {
    	res++;
    }
  }
  
  cout << res << endl;
}
