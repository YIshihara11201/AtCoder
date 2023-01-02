#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b;
  cin >> a >> b;
  
  int curr = b;
  int digit = 0;
  while(curr > 0) {
  	curr/=10;
    digit++;
  }
  
  int num = a * pow(10, digit) + b;
  
  if(sqrt(num) == (double)((int)sqrt(num))) {
  	cout << "Yes" << endl;
  } else {
  	cout << "No" << endl;
  }
  
}
