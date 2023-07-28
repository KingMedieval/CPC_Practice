#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;
    if (size == 2 || size == 3) {
        cout << "NO SOLUTION";
        return 0;
    }
    if (size == 1) {
        cout << "1";
        return 0;
    }
    for (int j = size; j > 4; j -= 2) {

        cout << j << " ";
    }
    cout << "2 4 1 3 ";
    for (int k = size - 1; k > 4; k -= 2) {
        cout << k << " ";
    }
}