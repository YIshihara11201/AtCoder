#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int K, N;
  cin >> K >> N;
  
  vector<int> houses(N);
  for(int i=0; i<N; i++) {
  	cin >> houses.at(i);
  }
  
  int maxDist = 0;
  for(int i=0; i<N; i++) {
    int currDist = (houses.at((i+1)%N) - houses.at(i)+K) % K;
  	if(maxDist < currDist) {
    	maxDist = currDist;
    }
  }
  cout << K-maxDist << endl;
}
