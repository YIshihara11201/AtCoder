#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  map<string, int> p1;
  for(int i=0; i<n; i++) {
  	string curr;
    cin >> curr;
    p1[curr]+=1;  
  }
  int m;
  cin >> m;
  map<string, int> p2;
  for(int i=0; i<m; i++) {
  	string curr;
    cin >> curr;
    p2[curr]+=1;  
  }
  
  int res = 0;
  for(auto str: p1) {
  	if(res < str.second - p2[str.first]) {
		res = str.second - p2[str.first];
    }
  }
  
  cout << res << endl;
}
