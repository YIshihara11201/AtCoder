#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  vector<int> dia(n);
  for(int i=0; i<n; i++) {
    cin >> dia.at(i);
  }
  
  int res = 0;
  int remainingMochi = n;
  while(remainingMochi>0) {
    int maxDia = dia.at(0);
    for(int i=1; i<n; i++) {
      maxDia = max(maxDia, dia.at(i));
    }
    res += 1;
    for(int i=0; i<n; i++) {
      if(dia.at(i) == maxDia) {
        dia.at(i) = -1;
        remainingMochi -= 1;
      }
    }
  }
  
  cout << res << endl;
}
