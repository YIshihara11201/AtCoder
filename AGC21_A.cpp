#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int64_t n;
  cin >> n;
  
  if(n < 10) {
  	cout << n << endl;
    return 0;
  }
  
  int digits = 0;
  int is_all_9 = true;
  while(n>=10) {
  	if(n%10 != 9) {
      is_all_9 = false;
    }
    n/=10;
    digits++;
  }
  
  int res = 0;
  if(is_all_9) {
    res = n + digits * 9;
  } else {
    if(n!=0 && n!=1) {
      res += (n-1);
    } 
  	for(int i=1; i<=digits; i++) {
      res += 9;
    }
  }
 
  cout << res << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
  int64_t n;
  cin >> n;
  
  if(n < 10) {
  	cout << n << endl;
    return 0;
  }
  
  int digits = 0;
  int is_all_9 = true;
  while(n>=10) {
  	if(n%10 != 9) {
      is_all_9 = false;
    }
    n/=10;
    digits++;
  }
  
  int res = 0;
  if(is_all_9) {
    res = n + digits * 9;
  } else {
    if(n!=0 && n!=1) {
      res += (n-1);
    } 
  	for(int i=1; i<=digits; i++) {
      res += 9;
    }
  }

  cout << res << endl;
}
