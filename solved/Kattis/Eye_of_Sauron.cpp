#include <iostream>
#include <string>

using namespace std;

int main() {
    string eye;
    cin >> eye;
    if (eye.length() % 2 == 0 && eye[eye.length() / 2 - 1] == '(' && eye[eye.length()/2] == ')') {
        cout << "correct";
    } else {
        cout << "fix";
    }
}