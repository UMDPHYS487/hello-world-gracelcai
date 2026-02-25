#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

int factorial(int num) {
    int curr = 1;
    for (int i = 1; i <= num; i++) {
        curr = curr * i;
    }
    return curr;
}

int main() {
    int res = factorial(10);
    cout << "factorial of " << 10 << " is " << res << "\n";
}
