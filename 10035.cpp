#include <bits/stdc++.h>

using namespace std;

int solve(int a, int b) {
    int carry = 0, res = 0;
    while (a > 0 || b > 0) {
        int sum = a % 10 + b % 10 + carry;
        if (sum >= 10) {
            res += 1;
            carry = 1;
        } else {
            carry = 0;
        }
        a /= 10; b /= 10;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        int c = solve(a, b);
        if (c == 1) cout << "1 carry operation.\n";
        else if (c == 0) cout << "No carry operation.\n";
        else cout << c << " carry operations.\n";
    }
    return 0;
}
