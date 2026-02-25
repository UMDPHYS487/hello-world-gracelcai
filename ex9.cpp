#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    int * jjj;
    for (int k = 0; k < 100000000; k++){
        jjj = new int(k);
        int lll = k%100000;
        if (lll < 1) {
            cout << "k is " << k << " " << lll << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));

        }
        delete jjj;
    }
    
    cout << "big pause before exiting" << endl;
    this_thread::sleep_for(std::chrono::milliseconds(100000));
}