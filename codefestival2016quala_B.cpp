#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  vector<int> rabbits(n+1);
  for(int i=1; i<=n; i++) {
	cin >> rabbits.at(i);
  }
  
  int res = 0;
  set<int> checked;
  for(int i=1; i<=n; i++) {
    int other = rabbits.at(i);
    if(checked.count(other)!=0) {
    	continue;
    }
      
  	if(i == rabbits.at(other)) {
      	checked.insert(i);
    	res++;
    }
  }
  
  cout << res << endl;
}
