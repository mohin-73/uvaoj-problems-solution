#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    bool parity = true;
    while (getline(cin, str)) {
        string s = "";
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == '"' && parity) {
                s += "``";
                parity = false;
                continue;
            } else if (str[i] == '"' && !parity) {
                s += "''";
                parity = true;
                continue;
            }
            s += str[i];
        }
        cout << s << '\n';
    }
    return 0;
}
