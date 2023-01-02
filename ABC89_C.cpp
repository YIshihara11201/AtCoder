#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  vector<int> m(5, 0);
  for(int i=0; i<n; i++) {
  	string str;
    cin >> str;
    if(str.at(0) == 'M') {
      m.at(0)++;
    } else if(str.at(0) == 'A') {
      m.at(1)++;
    } else if(str.at(0) == 'R') {
      m.at(2)++;
    } else if(str.at(0) == 'C') {
      m.at(3)++;
    } else if(str.at(0) == 'H') {
      m.at(4)++;
    } 
  }
  
  int64_t res = 0;
  for(int tmp=0; tmp<(1<<5); tmp++) {
  	bitset<5> s(tmp);
    int64_t sum = 1;
    if(s.count() == 3) {
      for (int i = 0; i < 5; i++) {
        if (s.test(i)) {
          sum *= m.at(i);
        }
      }
      res += sum;
    }
  }
  
  cout << res << endl;
}
