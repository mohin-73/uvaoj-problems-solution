#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    int parity = 0;
    while (getline(cin, str)) {
        string s = "";
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] != '"') {
                s += str[i];
            } else if (parity == 0) {
                s += "``";
                parity = 1;
            } else {
                s += "''";
                parity = 0;
            }
        }
        cout << s << '\n';
    }
    return 0;
}
