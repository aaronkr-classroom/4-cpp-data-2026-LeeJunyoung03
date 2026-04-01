#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {

    cout << "This program calculates the squares of numbers from 1 to 100." << endl;

    for (int i = 1; i <= 100; i++) {
        cout << setw(3) << i
            << setw(8) << i * i << endl;
    }

    return 0;
}