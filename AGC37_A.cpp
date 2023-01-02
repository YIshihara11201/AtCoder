#include<bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	cin >> s;
	
	int res = 1;
	string curr = s.substr(0, 1);
	string next;
	int len = 1;
	for(int i=1; i<s.size(); i++) {
		next = s.substr(i, len);
		while(next == curr) {
		    if(i+len == s.size()) {
		        res--;
		        break;
		    }
			len++;
			next = s.substr(i, len);
		}
		res++;
		i += len-1;
		len = 1;
		curr = next;
	}
	
	cout << res << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	int res = 1;
	string curr = s.substr(0, 1);
	string next;
	int len = 1;
	for(int i=1; i<s.size(); i++) {
		next = s.substr(i, len);
		while(next == curr) {
		    if(i+len == s.size()) {
		        res--;
		        break;
		    }
			len++;
			next = s.substr(i, len);
		}
		res++;
		i += len-1;
		len = 1;
		curr = next;
	}
	
	cout << res << endl;
}
