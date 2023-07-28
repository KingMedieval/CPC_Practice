#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> ans;
    for (int i = 1; i <= n; i++) {
        string input;
        cin >> input;
        if (i % 2 == 1) {
            ans.push_back(input);
        }
    }
    for (const auto& x : ans) {
        cout << x << endl;
    }
}