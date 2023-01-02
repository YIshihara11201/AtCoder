#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, d;
  cin >> n >> d;
  vector<vector<int>> matrix(n, vector<int>(d));
  for(int i=0; i<n; i++) {
  	for(int j=0; j<d; j++) {
    	cin >> matrix.at(i).at(j);
    }
  }
  
  int res = 0;
  for(int i=0; i<n; i++) {
    vector<int> row = matrix.at(i);
    for(int j=i+1; j<n; j++) {
      vector<int> curr = matrix.at(j);
      double dist = 0;
      for(int k=0; k<d; k++) {
      	dist += pow(row.at(k)-curr.at(k), 2);
      }
      dist = sqrt(dist);
      if(dist == (double)(int)dist) {
      	res++;
      }
    }
  }
  
  cout << res << endl;
}
