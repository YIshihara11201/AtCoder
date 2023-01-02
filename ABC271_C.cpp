#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	
	set<int> s;
	vector<int> a;
	int duplicate = 0;
	int curr;
	for(int i=0; i<n; i++) {
	    cin >> curr;
	    if(s.count(curr) != 0) {
	        duplicate++;
	    } else {
	        a.push_back(curr);
	    }
	    s.insert(curr);
	}
	
  	sort(a.begin(), a.end());
	vector<int> res(1, 0);
	for(int i=0; i<a.size(); i++) {
	    int next = res.at(res.size()-1)+1;
	    if(a.at(i) == next) {
	        res.push_back(a.at(i));
	    } else if(duplicate>=2) {
	        res.push_back(next);
	        duplicate-=2;
	        i--;
	    } else if(duplicate == 1) {
	        res.push_back(next);
	        duplicate--;
	        a.pop_back();
	        i--;
	    } else if(i < a.size()-1) {
	        res.push_back(next);
	        a.pop_back();
	        a.pop_back();
	        i--;
	    }
	}
	
    while(duplicate>1) {
        duplicate-=2;
        res.push_back(res.at(res.size()-1)+1);
    }
	
	cout << *(res.end()-1) << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	set<int> s;
	vector<int> a;
	int duplicate = 0;
	int curr;
	for(int i=0; i<n; i++) {
	    cin >> curr;
	    if(s.count(curr) != 0) {
	        duplicate++;
	    } else {
	        a.push_back(curr);
	    }
	    s.insert(curr);
	}
	
  	sort(a.begin(), a.end());
	vector<int> res(1, 0);
	for(int i=0; i<a.size(); i++) {
	    int next = res.at(res.size()-1)+1;
	    if(a.at(i) == next) {
	        res.push_back(a.at(i));
	    } else if(duplicate>=2) {
	        res.push_back(next);
	        duplicate-=2;
	        i--;
	    } else if(duplicate == 1) {
	        res.push_back(next);
	        duplicate--;
	        a.pop_back();
	        i--;
	    } else if(i < a.size()-1) {
	        res.push_back(next);
	        a.pop_back();
	        a.pop_back();
	        i--;
	    }
	}
	
    while(duplicate>1) {
        duplicate-=2;
        res.push_back(res.at(res.size()-1)+1);
    }
	
	cout << *(res.end()-1) << endl;
}
