#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    while (getline(cin, str)) {
        for (int i = 0; i < str.length(); ++i) {
            str[i] = str[i] - 7;
        }
        cout << str << '\n';
    }
    return 0;
}
