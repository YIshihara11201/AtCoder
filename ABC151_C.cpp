#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n, m;
  cin >> n >> m;
 
  vector<int> problem(n, -1);
  vector<int> wr(n, 0);
  
  int correct = 0;
  int wrong = 0;
  int curr_problem;
  string judge;
  for(int i=0; i<m; i++) {
    cin >> curr_problem;
    cin >> judge;
    if(problem.at(curr_problem-1) == -1) {
    	if(judge == "AC") {
        	problem.at(curr_problem-1) = 0;
          	wrong += wr.at(curr_problem-1);
          	correct++;
        } else {
        	wr.at(curr_problem-1) += 1;
        }
    }
      
  }
  
  cout << correct << " " << wrong << endl;
}
