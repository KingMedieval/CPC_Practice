#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];
    long int sum = 0;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        if((i != 0) && (arr[i-1] > arr[i])) {
            sum += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout << sum;
}