#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  vector<int> dish(n);
  for(int i=0; i<n; i++) {
  	cin >> dish.at(i);
  }
  
  vector<int> cnt(n);
  for(int i=0; i<n; i++) {
    int diff = (dish.at(i)-i+n)%n;
    cnt.at(diff) +=1;
    cnt.at((diff-1+n)%n) +=1;
    cnt.at((diff+1)%n) +=1;
  }
    
  cout << *max_element (cnt.begin(), cnt.end()) << endl;
  
}
