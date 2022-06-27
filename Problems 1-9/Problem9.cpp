// Problem 9
// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

// a^2 + b^2 = c^2
// For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <iostream>
#include <cmath>
using namespace std;

long long int method() {
    long long int c;
    for (int a = 1; a < 332; a++) {
        for (int b = 1; b < 500; b++) {
            c = a*a + b*b;
            // cout << sqrt(c) << endl;
            // cout << a << endl;
            // cout << b <<endl;
            if (a + b + sqrt(c) == 1000) {
                return a*b*sqrt(c);
            }
        }
    }
    return 0;
}

int main() {
    cout << method() << endl;
}

//Answer: 31875000