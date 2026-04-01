#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(void) {

    int max_i = 1000;
    int max_square = max_i * max_i;

    int width_i = to_string(max_i).length();
    int width_sq = to_string(max_square).length();

    for (int i = 1; i <= max_i; i++) {
        cout << setw(width_i) << i
            << setw(width_sq + 2) << i * i << endl;
    }

    return 0;
}
