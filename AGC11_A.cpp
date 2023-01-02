#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int N, C, K;
	cin >> N >> C >> K;
	vector<int> p(N);
  	for(int i=0; i<N; i++) {
    	cin >> p.at(i);
    }
  	sort(p.begin(), p.end());
  	
	int res = 0;
	int wait_cnt = 0;
	int limit = INT_MAX;
	for(int i=0; i<N; i++) {
      if(p.at(i)>limit) {
      	res++;
        limit = p.at(i)+K;
        wait_cnt = 1;
      } else if(wait_cnt == C-1) {
        res++;
        wait_cnt = 0;
        limit = INT_MAX;
      } else {
        if(p.at(i)+K < limit) {
        	limit = p.at(i)+K;        
        }
        wait_cnt++;
      }
	}
	
	if(wait_cnt > 0) {
		res++;
	}
	cout << res << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
	int N, C, K;
	cin >> N >> C >> K;
	vector<int> p(N);
  	for(int i=0; i<N; i++) {
    	cin >> p.at(i);
    }
  	sort(p.begin(), p.end());
  	
	int res = 0;
	int wait_cnt = 0;
	int limit = INT_MAX;
	for(int i=0; i<N; i++) {
      if(p.at(i)>limit) {
      	res++;
        limit = p.at(i)+K;
        wait_cnt = 1;
      } else if(wait_cnt == C-1) {
        res++;
        wait_cnt = 0;
        limit = INT_MAX;
      } else {
        if(p.at(i)+K < limit) {
        	limit = p.at(i)+K;        
        }
        wait_cnt++;
      }
	}
	
	if(wait_cnt > 0) {
		res++;
	}
	cout << res << endl;
}
