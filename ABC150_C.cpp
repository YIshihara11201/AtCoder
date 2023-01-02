#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	vector<int> A(n);
	vector<int> B(n);
	for(int i=0; i<n; i++) {
		cin >> A.at(i);
	}
	for(int i=0; i<n; i++) {
		cin >> B.at(i);
	}
	
	int a_idx = -1;
	int b_idx = -1;
	int cnt = 0;
	vector<int> P = A;
	sort(P.begin(), P.end());
	do {
		bool a_found = true;
		bool b_found = true;
		for(int i=0; i<n; i++) {
			if(P.at(i) != A.at(i)) {
				a_found = false;
			}
			if(P.at(i) != B.at(i)) {
				b_found = false;
			}
			if(!a_found && !b_found) {
				break;
			}
			
			if(i == n-1) {
              	if(a_found && b_found) {
                	a_idx = cnt;
                  	b_idx = cnt;
                } else if(a_found) {
					a_idx = cnt;
				} else if(b_found) {
					b_idx = cnt;
				}
			}
			
		}
      	if(a_idx!=-1 && b_idx!=-1) {
        	break;
        }
		cnt++;
		
	} while(next_permutation(P.begin(), P.end()));
	
  cout << abs(a_idx-b_idx) << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> A(n);
	vector<int> B(n);
	for(int i=0; i<n; i++) {
		cin >> A.at(i);
	}
	for(int i=0; i<n; i++) {
		cin >> B.at(i);
	}
	
	int a_idx = -1;
	int b_idx = -1;
	int cnt = 0;
	vector<int> P = A;
	sort(P.begin(), P.end());
	do {
		bool a_found = true;
		bool b_found = true;
		for(int i=0; i<n; i++) {
			if(P.at(i) != A.at(i)) {
				a_found = false;
			}
			if(P.at(i) != B.at(i)) {
				b_found = false;
			}
			if(!a_found && !b_found) {
				break;
			}
			
			if(i == n-1) {
              	if(a_found && b_found) {
                	a_idx = cnt;
                  	b_idx = cnt;
                } else if(a_found) {
					a_idx = cnt;
				} else if(b_found) {
					b_idx = cnt;
				}
			}
			
		}
      	if(a_idx!=-1 && b_idx!=-1) {
        	break;
        }
		cnt++;
		
	} while(next_permutation(P.begin(), P.end()));
	
  cout << abs(a_idx-b_idx) << endl;
}
