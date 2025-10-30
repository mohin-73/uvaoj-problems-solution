#include <bits/stdc++.h>

using namespace std;

int solve() {
    int a, b;
    cin >> a >> b;
    a = a % 2 ? a : a + 1;
    b = b % 2 ? b : b - 1;
    if (a > b) return 0;
    int n = 1 + (b - a) / 2;
    int s = ((a + b) * n) / 2;
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int ans = solve();
        cout << "Case " << i << ": " << ans << '\n';
    }
    return 0;
}
