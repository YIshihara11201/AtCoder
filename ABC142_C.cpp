#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  vector<int> s(N+1);
  for(int i=1; i<=N; i++) {
    int curr_num;
    cin >> curr_num;
    s.at(curr_num) = i;
  }
  
  for(int i=1; i<N+1; i++) {
  	cout << s.at(i) << " ";
  }
  cout << endl;
}
