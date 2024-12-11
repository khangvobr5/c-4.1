#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user to input an integer
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
