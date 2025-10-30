#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        long long f, a, b, c, sum = 0;
        cin >> f;
        for (int i = 0; i < f; ++i) {
            cin >> a >> b >> c;
            sum += a * c;
        }
        cout << sum << '\n';
    }
    return 0;
}
