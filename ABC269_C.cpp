#include<bits/stdc++.h>
using namespace std;
 
void rec(vector<int> pos_one, bitset<60> curr) {
    if(pos_one.empty()) {
        cout << curr.to_ullong() << endl;
        return;
    }
    
    int pos = *(pos_one.end()-1);
    pos_one.pop_back();
    rec(pos_one, curr);
    curr.set(pos);
    rec(pos_one, curr);
 
}
 
int main() {
  int64_t n;
  cin >> n;
  
  bitset<60> num(n);
  vector<int> pos_one;
  for(int i=0; i<60; i++) {
      if(num.test(i) == 1) {
          pos_one.push_back(i);
      }
  }
 
  bitset<60> curr;
  rec(pos_one, curr);
  
}
