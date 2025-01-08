// Language: cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;

    int letters[26] = {0};
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            letters[c - 'a'] = 1;
        } else if (c >= 'A' && c <= 'Z') {
            letters[c - 'A'] = 1;
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        count += letters[i];
    }

    if (count == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}