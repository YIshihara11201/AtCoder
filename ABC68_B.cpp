#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  vector<int> exp(7);
  for(int i=0; i<7; i++) {
  	exp.at(i) = pow(2, i);
  }
  
  int closest = exp.at(0);
  for(int i=1; i<7; i++) {
    int diff = n-exp.at(i);
  	if(diff>=0 && diff<n-closest) {
      closest = exp.at(i);
    }
  }
  
  cout << closest << endl;
 
}
