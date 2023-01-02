#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  map<string, int> dict;
  string curr;
  for(int i=0; i<n; i++) {
	cin >> curr;
    dict[curr] += 1;
  }
  
  int max = 0;
  for(auto &item :dict) {
  	if(max < item.second) {
      max = item.second;
    }
  }
  
  for(auto &item :dict) {
  	if(item.second == max) {
    	cout << item.first << endl;
    }
  }
}
