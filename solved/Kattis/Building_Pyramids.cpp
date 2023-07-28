#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int x, i = 0, b = 0;
    cin >> x;
    do {
        b += pow(1 + i*2,2);
        i++;
    } while (x >= b);
    cout << --i;
    return 0;
}