#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> A(n + 1);
    vector<int> B(n);
    for (int i = 0; i < n + 1; i++) {
        cin >> A.at(i);
    }
    for (int i = 0; i < n; i++) {
        cin >> B.at(i);
    }
 
    int64_t res = 0;
    for (int i = 0; i < n; i++) {
        int power = B.at(i) - A.at(i);
        if (power >= 0) {
            res += A.at(i);
            A.at(i) = 0;
            res += min(A.at(i + 1), power);
            A.at(i + 1) = max(0, A.at(i + 1) - power);
 
        } else {
            res += B.at(i);
            A.at(i) -= B.at(i);
        }
    }
 
    cout << res << endl;
}
