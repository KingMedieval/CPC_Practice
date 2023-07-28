#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;
    int cn;
    long int sum = 0;
    for (int i = 1; i < size; i++) {
        cin >> cn;
        sum -= cn;
    }
    if (!(size % 2)) size += 1;
    cout << ((sum % size)?size + (sum % size):size);
}