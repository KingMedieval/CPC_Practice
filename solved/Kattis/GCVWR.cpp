#include <iostream>

using namespace std;

int main() {
    int G, T, n, items = 0, item;
    double towCap;
    cin >> G >> T >> n;
    for (int i = 0; i < n; i++) {
        cin >> item;
        items += item;
    }
    towCap = (G - T) * 0.9;
    towCap = towCap - items;

    cout << towCap;
}