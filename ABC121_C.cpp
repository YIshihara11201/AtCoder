#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int64_t n, m;
  cin >> n >> m;
  
  vector<pair<int64_t, int64_t>> shop(n);
  for(int i=0; i<n; i++) {
  	int price, stock;
    cin >> price >> stock;
    shop.at(i) = make_pair(price, stock);
  }
  
  sort(shop.begin(), shop.end());
  int count = m;
  auto curr_place = shop.begin();
  int64_t price, stock;
  int64_t res = 0;
  while(count>0) {
  	price = (*curr_place).first;
    stock = (*curr_place).second;
    if(stock >= count) {
      res += count*price;
      count = 0;
    } else {
      res += stock*price;
      count -= stock;
    }
    curr_place++;
  }
  
  cout << res << endl;
}
