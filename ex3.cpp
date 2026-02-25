#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

int main() {
    int curr = 1;
    for (int i = 1; i <= 10; i++) {
        curr = curr * i;
        cout << "factorial of " << i << " is " << curr << "\n";
    }
}
