#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int64_t a, b, c, k;
  cin >> a >> b >> c >> k; 
    
  if(a==b && b==c) {
  	cout << 0 << endl;
  }else if(abs(a-b) > pow(10, 18)) {
  	cout << "Unfair" << endl;
  } else if(k%2==1) {
  	cout << b-a << endl;
  } else if(k%2==0) {
  	cout << a-b << endl;
  }
  
}
