#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> towns(n);
  for(int i=0; i<n; i++) {
  	int x, y;
    cin >> x >> y;
    towns.at(i) = make_pair(x, y);
  }
  
  sort(towns.begin(), towns.end());
  
  double total = 0;
  do {
    double dist = 0;
  	for(int i=1; i<n; i++) {
      auto prev = towns.at(i-1);
      auto curr = towns.at(i);
      dist += sqrt(pow(prev.first-curr.first, 2) + pow(prev.second-curr.second, 2));
    }
    total += dist;
  } while(next_permutation(towns.begin(), towns.end()));
 
  int paths = 1;
  for(int i=n; i>0; i--) {
  	paths*=i;
  }
  
  double ave = total/paths;
  
  cout << fixed << setprecision(7);
  cout << ave << endl;
}
