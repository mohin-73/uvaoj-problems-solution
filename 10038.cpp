#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
    int arr[n];
    set<int> s;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 1; i < n; ++i) {
        int diff = abs(arr[i] - arr[i - 1]);
        if (diff >= n || diff == 0) {
            cout << "Not jolly\n";
            return ;
        }
        s.insert(abs(arr[i] - arr[i - 1]));
    }
    if (s.size() == n - 1) {
        cout << "Jolly\n";
    } else {
        cout << "Not jolly\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while (cin >> n) {
        solve(n);
    }
    return 0;
}
