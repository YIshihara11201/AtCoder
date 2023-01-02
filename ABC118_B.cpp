#include<bits/stdc++.h>
using namespace std;
 
int main (){
  int n, m;
  cin >> n >> m;
  
  map<int, int> count;
  for(int i=0; i<n; i++) {
	int k;
    cin >> k;
    for(int j=0; j<k; j++){
      int curr;
      cin >> curr;
      count[curr]++;
    }
  }
 
  int res = 0;
  for(auto item: count) {
  	if(item.second == n) {
    	res++;
    }
  }
  
  cout << res << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main (){
  int n, m;
  cin >> n >> m;
  
  map<int, int> count;
  for(int i=0; i<n; i++) {
	int k;
    cin >> k;
    for(int j=0; j<k; j++){
      int curr;
      cin >> curr;
      count[curr]++;
    }
  }

  int res = 0;
  for(auto item: count) {
  	if(item.second == n) {
    	res++;
    }
  }
  
  cout << res << endl;
}
