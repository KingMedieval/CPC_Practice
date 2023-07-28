#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;
    if (input.substr(0, 3) == "555") cout << "1";
    else cout << "0";
    return 0;
}