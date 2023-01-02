#include<bits/stdc++.h>
using namespace std;
 
bool rec(string &target, int idx) {
  if(idx == target.size()) {
    return true;
  }
  
  bool res;
  if(target.substr(idx, 5) == "erase") {
    if(target.substr(idx, 6) == "eraser") {
    	res = rec(target, idx+5) || rec(target, idx+6);
    } else {
    	res = rec(target, idx+5);
    }
  } else if(target.substr(idx, 5) == "dream") {
    if(target.substr(idx, 7) == "dreamer") {
      res = rec(target, idx+5) || rec(target, idx+7);
    } else {
      res = rec(target, idx+5);
    }
  } else {
    res = false;
  }
  
  return res;
}
 
int main() {
  string target;
  cin >> target;
  
  if(rec(target, 0)) {
  	cout << "YES" << endl;
  } else {
  	cout << "NO" << endl;
  }
  
}
#include<bits/stdc++.h>
using namespace std;

bool rec(string &target, int idx) {
  if(idx == target.size()) {
    return true;
  }
  
  bool res;
  if(target.substr(idx, 5) == "erase") {
    if(target.substr(idx, 6) == "eraser") {
    	res = rec(target, idx+5) || rec(target, idx+6);
    } else {
    	res = rec(target, idx+5);
    }
  } else if(target.substr(idx, 5) == "dream") {
    if(target.substr(idx, 7) == "dreamer") {
      res = rec(target, idx+5) || rec(target, idx+7);
    } else {
      res = rec(target, idx+5);
    }
  } else {
    res = false;
  }
  
  return res;
}

int main() {
  string target;
  cin >> target;
  
  if(rec(target, 0)) {
  	cout << "YES" << endl;
  } else {
  	cout << "NO" << endl;
  }
  
}
