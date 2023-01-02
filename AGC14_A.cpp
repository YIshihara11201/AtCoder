#include<bits/stdc++.h>
using namespace std;
 
int main() {
  long long A, B, C;
  cin >> A >> B >> C;
  
  if(A%2==1 || B%2==1 || C%2==1) {
      cout << 0 << endl;
      return 0;
  }
  
  if(A==B && B==C) {
      cout << -1 << endl;
      return 0;
  }
  
  int res = 0;
  while(A%2==0 && B%2==0 && C%2==0) {
    long long tA = (B + C) / 2;
    long long tB = (C + A) / 2;
    long long tC = (A + B) / 2;
  	A = tA;
	B = tB;
	C = tC;
    res += 1;
  }
  
  cout << res << endl;
  return 0;
}
