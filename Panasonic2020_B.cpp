#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int64_t h, w;
  cin >> h >> w;
  
  int64_t res;
  if(w==1 || h==1) {
    res = 1;
  } else {
    int64_t odd_row_sq = (w+1)/2;
    int64_t even_row_sq = w/2;
    int64_t odd_row_num = (h+1)/2;
    int64_t even_row_num = h/2;
    res = odd_row_sq*odd_row_num + even_row_sq*even_row_num;
  }
  
  cout << res << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
  int64_t h, w;
  cin >> h >> w;
  
  int64_t res;
  if(w==1 || h==1) {
    res = 1;
  } else {
    int64_t odd_row_sq = (w+1)/2;
    int64_t even_row_sq = w/2;
    int64_t odd_row_num = (h+1)/2;
    int64_t even_row_num = h/2;
    res = odd_row_sq*odd_row_num + even_row_sq*even_row_num;
  }
  
  cout << res << endl;
}
