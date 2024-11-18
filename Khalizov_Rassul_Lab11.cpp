// Rassul Khalizov
// Lab 9
// 11/17/24

#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

int main() {
    const int ARRAY_SIZE = 50;
    double alpha[ARRAY_SIZE];

    // initiate the array
    for (int i = 0; i < 25; i++) {
        alpha[i] = pow(i, 2);
    }

    // initates the last 25 elements times three
    for (int i = 25; i < ARRAY_SIZE; i++) {
        alpha[i] = 3 * i;
    }

    // Outputs the array with 10 numbers on eahc line
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << setw(6) << alpha[i];
        // Starts a new line after every 10 numbers
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }
    /*
    0     1     4     9    16    25    36    49    64    81
   100   121   144   169   196   225   256   289   324   361
   400   441   484   529   576    75    78    81    84    87
    90    93    96    99   102   105   108   111   114   117
   120   123   126   129   132   135   138   141   144   147
    */

    return 0;
}
