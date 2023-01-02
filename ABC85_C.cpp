#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, Y;
    cin >> N >> Y;
 
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            int sum = i * 10000 + j * 5000;
          	int remainder = Y - sum;
            int k = remainder/1000;
            if (remainder>=0 && i+j+k==N) {
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
        }
    }
 
    cout << -1 << " " << -1 << " " << -1 << endl;
}
