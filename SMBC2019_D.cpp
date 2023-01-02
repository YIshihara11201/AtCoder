#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  
  int res = 0;
  for(int i=0; i<1000; i++) {
  	string curr = to_string(i);
    if(curr.size()==1) {
    	curr = "00" + curr;
    } else if(curr.size()==2) {
    	curr = "0" + curr;
    }
    
    int idx = 0;
    for(int i=0; i<n; i++) {
    	if(s.at(i) == curr.at(idx)) {
        	idx++;
        }
      	if(idx == 3) {
        	res++;
          break;
        }
    }
  }
  cout << res << endl;
}
