#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  for(int i=0; i<N; i++) {
  	cin >> d.at(i);
  }
  
  sort(d.begin(), d.end());
  if(d.at(N/2) == d.at(N/2-1)) {
  	cout<< 0 << endl;
  } else {
    cout<< d.at(N/2)-d.at(N/2-1)<< endl;
  }
  
}
#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  for(int i=0; i<N; i++) {
  	cin >> d.at(i);
  }
  
  sort(d.begin(), d.end());
  if(d.at(N/2) == d.at(N/2-1)) {
  	cout<< 0 << endl;
  } else {
    cout<< d.at(N/2)-d.at(N/2-1)<< endl;
  }
  
}
