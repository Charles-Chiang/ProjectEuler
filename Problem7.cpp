// Problem 7
// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
// we can see that the 6th prime is 13.

// What is the 10 001st prime number?

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

int method() {
    int primesleft = 10001;
    int num = 1;
    while (primesleft > 0) {
        num++;
        if (checkprime(num)) {
            primesleft -= 1;
        }
    }
    return num;
}

int main() {
    cout << method() << endl;
}

//Answer: 104743