#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> adj(11, vector<bool>(11, false));
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj.at(a).at(b) = true;
        adj.at(b).at(a) = true;
    }
    
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        p.at(i) = i+1;
    }
 
    int res = 0;
    do {
        if (p.at(0)!=1) {
            continue;
        }
        for (int i = 1; i < n; i++) {
            if (!adj.at(p.at(i)).at(p.at(i-1))) {
                break;
            }
            if (i == n-1) {
                res++;
            }
        }
 
    } while (next_permutation(p.begin(), p.end()));
 
    cout << res << endl;
}
