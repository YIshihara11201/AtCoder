#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  
  int diff1 = x2-x1;
  int diff2 = y2-y1;
  
  int x3 = x2-diff2;
  int y3 = y2+diff1;
  int x4 = x3-diff1;
  int y4 = y3-diff2;
  
  cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
  
}
