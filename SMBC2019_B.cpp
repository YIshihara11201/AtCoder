#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  int x = n*100/108;
 
  if(x*1.08 == n) {
  	cout << x << endl;
  } else if((int)((x+1)*1.08)  == n){
  	cout << x+1 << endl;
  } else {
  	cout << ":(" << endl;
  }
}
