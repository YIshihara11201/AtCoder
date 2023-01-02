#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  vector<tuple<string, int, int>> restaurants(n);
  for(int id=1; id<=n; id++) {
  	string str;
    int rate;
    cin >> str >> rate;
    restaurants.at(id-1) = make_tuple(str, rate, id);
  }
  
  auto comp = [](tuple<string, int, int> a, tuple<string, int, int> b) { 
    if(get<0>(a) == get<0>(b)) {
      return get<1>(a) > get<1>(b);
    }
    return get<0>(a) < get<0>(b); 
  };
  
  sort(restaurants.begin(), restaurants.end(), comp);
  
  for(int i=0; i<n; i++) {
  	cout << get<2>(restaurants.at(i)) << endl;
  }
 
}
