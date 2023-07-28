#include <iostream>

using namespace std;

int main() {
    int n, sum = 0, in;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> in;
        sum += in;
    }
    cout << sum - n + 1;
    return 0;
}