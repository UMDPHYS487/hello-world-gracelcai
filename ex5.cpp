#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

int factorial(int num) {
    int curr = 1;
    for (int i = 1; i <= num; i++) {
        curr = curr * i;
        // cout << "factorial of " << i << " is " << curr << "\n";
    }
    return curr;
}

int y;
int *x;

int main() {
    int number;
    cout << "Please enter an integer value: ";
    cin >> number;
    int result = factorial(number);
    cout << "The value you entered is " << number << " and its factorial is " << result << "\n";
}
