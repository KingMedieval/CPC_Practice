#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;
    cout << "h";
    for (int i = 1; i < input.length(); i++) {
        if (input[i] != 'e') break;
        cout << "ee";
    }
    cout << "y";
    return 0;
}