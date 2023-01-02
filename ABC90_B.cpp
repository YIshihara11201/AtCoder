#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b;
  cin >> a >> b;
  
  int res = 0;
  for(int i=a; i<=b; i++) {
  	string curr = to_string(i);
    bool is_palindrome = true;
    while(curr.size()>1) {
      if(curr.at(0) != curr.at(curr.size()-1)) {
      	is_palindrome = false;
        break;
      } else {
      	curr = curr.substr(1, curr.size()-2);
      }
    }
    if(is_palindrome) {
    	res++;
    }
  }
  
  cout << res << endl;
}
