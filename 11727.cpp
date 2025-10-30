#include <bits/stdc++.h>

using namespace std;

int solve() {
    int arr[3];
    for (int i = 0; i < 3; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    return arr[1];
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
