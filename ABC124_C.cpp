#include<bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	cin >> s;
	bitset<100000> input(s);
	bitset<100000> target1;
	bitset<100000> target2;
	
	int l = s.size();
	for(int i=0; i<l; i++) {
	    if(i%2 == 0) {
	        target1.set(i, 1);
	    } else {
	        target2.set(i, 1);
	    }
	}
	
	int res = (input^target1).count() < (input^target2).count() ? (input^target1).count(): (input^target2).count();
	cout << res << endl;
  	
}
