#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b;
  cin >> a >> b;
  
  if(b==1) {
  	cout << 0 << endl;
    return 0;
  }
  
  int curr = a;
  int count = 1;
  while(curr<b) {
    curr--;
    curr += a;
    count +=1;
  }
  
  cout << count << endl;
}
