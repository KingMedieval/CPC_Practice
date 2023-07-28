#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double percent;
    cin >> percent;

    cout << fixed << setprecision(10)
         << 100 / percent << endl << 100 / (100 - percent);

    return 0;
}