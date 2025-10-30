#include <bits/stdc++.h>

using namespace std;

int solve(int a, int b) {
    string s1, s2;
    s1 = to_string(a);
    s2 = to_string(b);
    if (s1.length() > s2.length()) {
        int diff = s1.length()
    }
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
