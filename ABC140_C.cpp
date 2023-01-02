#include<bits/stdc++.h>
using namespace std;
 
int main () {
  int N;
  cin >> N;
  
  vector<int> B(N-1);
  for(int i=0; i<N-1; i++) {
  	cin >> B.at(i);
  }
  
  int res = B.at(0);
  for(int i=0; i<N-1; i++) {
      if(i==N-2) {
        res += B.at(i);
      } else {
        res += min(B.at(i), B.at(i+1));
      }
  }
  
  cout << res << endl;
}
