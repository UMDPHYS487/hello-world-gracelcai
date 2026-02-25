#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

int main() {
    int number;
    cout << "Please enter a value: ";
    cin >> number;
    switch(number % 2) {
        case 1:
            cout << float(number) / 2 << "\n";
        default:
            if (number < 10) {
                cout << std::pow(number, 2) << "\n";
            } else {
                cout << "hahaha\n";
            }
    }
}
