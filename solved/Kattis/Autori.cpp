#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    string ans;
    ans = s[0];
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') ans.push_back(s[i + 1]);
    }
    cout << ans;
}
