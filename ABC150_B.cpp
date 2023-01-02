#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  string str;
  cin >> str;
  
  int res = 0;
  for(int i=0; i<str.size()-2; i++) {
  	if(str.substr(i, 3) == "ABC") {
      res++;
    }
  }
  
  cout << res << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string str;
  cin >> str;
  
  int res = 0;
  for(int i=0; i<str.size()-2; i++) {
  	if(str.substr(i, 3) == "ABC") {
      res++;
    }
  }
  
  cout << res << endl;
}
