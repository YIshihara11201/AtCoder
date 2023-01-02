#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
  int q, h, s, d, n;
  cin >> q >> h >> s >> d >> n;
  
  vector<int64_t> unit_price(4);
  unit_price.at(0) = 8 * q;
  unit_price.at(1) = 4 * h;
  unit_price.at(2) = 2 * s;
  unit_price.at(3) = d;
  
  sort(unit_price.begin(), unit_price.end());
  auto lowest = upper_bound(unit_price.begin(), unit_price.end(), 0);
  auto second_lowest = upper_bound(unit_price.begin(), unit_price.end(), *lowest);
 
  int64_t res = 0;
  if(*lowest == d) {
    if(n==1) {
        res = *second_lowest / 2;
    } else if(n%2 == 0) {
        res = *lowest * n / 2;
    } else if(n%2 == 1) {
        res = *lowest * (n-1) / 2 + *second_lowest / 2; 
    }
  } else {
      res = *lowest * n / 2;
  }
  
  cout << res << endl;
}
