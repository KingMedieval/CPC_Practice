#include <iostream>

using namespace std;

int main() {
    int t, input, ans = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> input;
        if (input < 0) ans++;
    }
    cout << ans;
}