#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
  int max_wait = 0;
  int res = 0;
  for(int i=0; i<5; i++) {
  	int curr;
    cin >> curr;
    if(curr%10!=0 && (10-curr%10) > max_wait) {
    	max_wait = 10-(curr%10);
    }
    res += curr;
    if(curr%10!=0) {
        res += 10-(curr%10);
    }
  }
  res = res - max_wait;
  
  cout << res << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
  
  int max_wait = 0;
  int res = 0;
  for(int i=0; i<5; i++) {
  	int curr;
    cin >> curr;
    if(curr%10!=0 && (10-curr%10) > max_wait) {
    	max_wait = 10-(curr%10);
    }
    res += curr;
    if(curr%10!=0) {
        res += 10-(curr%10);
    }
  }
  res = res - max_wait;
  
  cout << res << endl;
}
