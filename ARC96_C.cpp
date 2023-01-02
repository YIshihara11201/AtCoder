#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C, x, y;
  cin >> A >> B >> C >> x >> y;
  
  int res = std::numeric_limits<int>::max();
  int curr;
  for(int i=0; i<=max(x, y); i++) {
  	curr = A*max(0, (x-i))+ B*max(0, (y-i)) + 2*C*i;
    if(curr < res) {
    	res = curr;
    }
  }
  
  cout << res << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, x, y;
  cin >> A >> B >> C >> x >> y;
  
  int res = std::numeric_limits<int>::max();
  int curr;
  for(int i=0; i<=max(x, y); i++) {
  	curr = A*max(0, (x-i))+ B*max(0, (y-i)) + 2*C*i;
    if(curr < res) {
    	res = curr;
    }
  }
  
  cout << res << endl;
}
