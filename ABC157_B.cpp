#include<bits/stdc++.h>
using namespace std;
 
int main() {
  vector<set<int>> check(8);
  for(int i=1; i<=9; i++) {
    int curr;
    cin >> curr;
  	switch(i) {
      case 1:
        check.at(0).insert(curr);
        check.at(3).insert(curr);
        check.at(6).insert(curr);
        break;
      case 2:
        check.at(0).insert(curr);
        check.at(4).insert(curr);
        break;
      case 3:
        check.at(0).insert(curr);
        check.at(5).insert(curr);
        check.at(7).insert(curr);
        break;
      case 4:
        check.at(1).insert(curr);
        check.at(3).insert(curr);
        break;
      case 5:
        check.at(1).insert(curr);
        check.at(4).insert(curr);
        check.at(6).insert(curr);
        check.at(7).insert(curr);
        break;        
      case 6:
        check.at(1).insert(curr);
        check.at(5).insert(curr);
        break;        
      case 7:
        check.at(2).insert(curr);
        check.at(3).insert(curr);
        check.at(7).insert(curr);
        break;
      case 8:
        check.at(2).insert(curr);
        check.at(4).insert(curr);
        break;
      case 9:
        check.at(2).insert(curr);
        check.at(5).insert(curr);
        check.at(6).insert(curr);
        break;
    }
  }
  
  int n;
  cin >> n;
  for(int i=0; i<n; i++) {
    int curr;
    cin >> curr;
    for(int j=0; j<8; j++) {
      check.at(j).erase(curr);
      
      if(check.at(j).size() == 0) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  
  cout << "No" << endl;
}
