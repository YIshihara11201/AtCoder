#include<bits/stdc++.h>
using namespace std;
 
int main() {
	string str;
	cin >> str;
  	int a = stoi(str.substr(0,1));
    int b = stoi(str.substr(1,1));
    int c = stoi(str.substr(2,1));
    int d = stoi(str.substr(3,1));
  
	string opr1, opr2, opr3;
	for(int i=0; i<2; i++) {
      	int curr1 = a;
		if(i==0) {
            curr1 += b;
			opr1 = "+";
		}else {
            curr1 -= b;
			opr1 = "-";
		}
		for(int j=0; j<2; j++) {
          	int curr2 = curr1;
			if(j==0) {
              	curr2 += c;
				opr2 = "+";
			}else {
                curr2 -= c;
				opr2 = "-";
			}
			for(int k=0; k<2; k++) {
                int curr3 = curr2;
				if(k==0) {
                    curr3 += d;
					opr3 = "+";
				}else {
                    curr3 -= d;
					opr3 = "-";
				}
              
              	if(curr3 == 7) {
					cout << a << opr1 << b << opr2 << c << opr3 << d << "=7" << endl ;
					return 0;
				}
			}
			
		}
	}
}
