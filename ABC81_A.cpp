#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int input;
  cin >> input;
  input += 2;
  
  int res = 0;
  res += input%2;
  input /= 10;
  res += input%10;
  input /= 10;
  res += input%10;
  
  cout << res << endl;
}
