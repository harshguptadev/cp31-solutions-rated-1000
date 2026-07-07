#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> vec;

    // Block 1: Forward
    for (int i = 1; i <= n; i++) vec.push_back(i);
    
    // Block 2: Forward
    for (int i = 1; i <= n; i++) vec.push_back(i);
    
    // Block 3: Backward
    for (int i = n; i >= 1; i--) vec.push_back(i);
    
    // Block 4: Forward
    for (int i = 1; i <= n; i++) vec.push_back(i);

    // If n is odd, the internal math hits a single collision where 2x = n + 1.
    // Swapping the last two elements fixes any odd n boundary condition cleanly.
    if (n % 2 != 0) {
        swap(vec[4 * n - 1], vec[4 * n - 2]);
    }

    for (int i = 0; i < 4 * n; i++) {
        cout << vec[i] << (i == 4 * n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}