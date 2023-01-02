#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int N, M;
  cin >> N >> M;
  
  map<int, int> dict;
  for(int i=0; i<M; i++) {
  	int a, b;
    cin >> a >> b;
    dict[a]++;
    dict[b]++;
  }
  
  for(int i=1; i<=N; i++) {
  	cout << dict[i] << endl;
  }
}
