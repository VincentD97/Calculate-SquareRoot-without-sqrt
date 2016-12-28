#include <iostream>
using namespace std;
#define BaseCase 1.0;

int main() {
    double n = 0;
    cout << "Input a non-negative number :    ";
    cin >> n;
    if (n < 0) {
        cout << n << " is negative." << endl;
        exit(1);
    }
    if (!n)
        cout << "The square root of 0 is 0.\n";
    else {
        double last_term = 0, new_term = BaseCase;
        do {
            last_term = new_term;
            new_term = ( last_term + n / last_term ) / 2;
        } while (last_term != new_term);
        cout << "The square root of " << n << " is " << new_term << "." << endl;
    }
}
