#include <iostream>
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
    // ex 1
    cout << "I like coding!\n";

    // ex 2
    for (int i = 0; i < 10; i++) {
        cout << "loop has run " << i + 1 << " times\n";
    }

    // ex 3
    int curr = 1;
    for (int i = 1; i <= 10; i++) {
        curr = curr * i;
        cout << "factorial of " << i << " is " << curr << "\n";
    }

    // ex 4
    int res = factorial(10);
    cout << "factorial of " << 10 << " is " << res << "\n";

    // ex 5
    int number;
    cout << "Please enter an integer value: ";
    cin >> number;
    int result = factorial(number);
    cout << "The value you entered is " << number << " and its factorial is " << result << "\n";

    //ex 6
    y = 10;
    x = &y;
    cout << *x << "\n";
    y = 20;
    cout << *x << "\n";
}
