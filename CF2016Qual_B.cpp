#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, a, b;
  cin >> n >> a >> b;
  
  string str;
  cin >> str;
  
  int count_a = 0;
  int count_b = 0;
  for(int i=0; i<str.size(); i++) {
  	if(str.at(i) == 'a') {
      if(count_a+count_b < a+b) {
      	cout << "Yes" << endl;
      	count_a++;
      } else {
      	cout << "No" << endl;
      }
    } else if(str.at(i) == 'b') {
      if(count_b<b && count_a+count_b<a+b) {
      	cout << "Yes" << endl;
      	count_b++;
      } else {
      	cout << "No" << endl;
      }
    } else {
    	cout << "No" << endl;
    }
  }
}
