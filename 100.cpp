#include <bits/stdc++.h>

using namespace std;

unordered_map<int, int> memo;

int solve(int i, int j) {
    int result = 0;
    while (j >= i) {
        if ((memo.find(i) != memo.end())) {
            result = max(result, memo[i]);
            i += 1;
            continue;
        }
        int t = i, c = 1;
        while (t != 1) {
            t = t % 2 == 0 ? t / 2 : 3 * t + 1;
            c += 1;
        }
        result = max(result, c);
        memo[i] = c;
        i += 1;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int i, j;
    while (cin >> i >> j) {
        int mcl = solve(min(i, j), max(i, j));
        cout << i << ' ' << j << ' ' << mcl << '\n';
    }
    return 0;
}
