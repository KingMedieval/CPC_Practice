#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a;
    cin >> a;
    vector<int> b(a);
    for (int i = 0; i < a; i++) {
        cin >> b[i];
    }
    for (int j = a - 1; j >= 0; j--) {
        cout << b[j] << endl;
    }
    return 0;
}