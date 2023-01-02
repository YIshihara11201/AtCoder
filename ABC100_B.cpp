#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int D, N;
  cin >> D >> N;
  
  if(N==100) {
  	N = 101;
  }
  
   cout << (int)(N*pow(100, D)) << endl;
}
