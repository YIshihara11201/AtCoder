#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  int64_t res = 1;
  for(int i=1; i<=n; i++) {
  	res *= i;
    res %= 1000000007;
  }
  cout << res << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int64_t res = 1;
  for(int i=1; i<=n; i++) {
  	res *= i;
    res %= 1000000007;
  }
  cout << res << endl;
}
