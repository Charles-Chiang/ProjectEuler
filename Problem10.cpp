// Problem 10
// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

// Find the sum of all the primes below two million.

#include <iostream>
#include <cmath>
using namespace std;

bool checkprime(int num) {
    int root = sqrt(num);
    if (root*root == num) {
        return false;
    }

    for (int i = 2; i <= root; i++) {
        if (num%i == 0) {
            return false;
        }
    }
    return true;
}

long long int method() {
    long long int sum;
    for (int i = 2; i < 2000000; i++) {
        if (checkprime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    cout << method() << endl;
}

//Answer: 142913828922