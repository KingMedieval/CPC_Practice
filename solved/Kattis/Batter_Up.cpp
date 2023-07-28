#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int x;
    cin >> x;
    double input, sum = 0, div = 0;
    for (int i = 0; i < x; i++) {
        cin >> input;
        if (input != -1) {
            sum += input;
            div++;
        }
    }
    cout << fixed << setprecision(15) << sum / div;
    return 0;
}