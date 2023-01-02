#include<bits/stdc++.h>
using namespace std;
 
int main() {
  string str;
  cin >> str;
  
  int res = 0;
  int curr = 0;
  for(int i=0; i<str.size(); i++) {
  	if(str.at(i) == 'A' || str.at(i) == 'C' || str.at(i) == 'T' || str.at(i) == 'G') {
    	curr++;
    } else {
      	if(curr > res) {
        	res = curr;
        }
    	curr = 0;
    }
  }
  
  
  cout << max(res, curr) << endl;
}
