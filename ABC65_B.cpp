#include<bits/stdc++.h>
using namespace std;
 
int main () {
	int n;
	cin >> n;
	vector<int> a(n+1);
	for(int i=1; i<=n; i++) {
		cin >> a.at(i);
	}
	
	int curr = 1;
	set<int> s;
	int count = 0;
	s.insert(curr);
	while(true) {
	    curr = a.at(curr);
		count++;
		if(curr == 2) {
		    break;
		}
		if(s.count(curr)!=0) {
			count = -1;
			break;
		}
		s.insert(curr);
	}
 
    cout << count << endl;
}
