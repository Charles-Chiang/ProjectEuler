// Problem 6
// The sum of the squares of the first ten natural numbers is 385

// The square of the sum of the first ten natural numbers is 3025

// Hence the difference between the sum of the squares of the first 
// ten natural numbers and the square of the sum is 3025 - 385 = 2640.

// Find the difference between the sum of the squares of the first 
// one hundred natural numbers and the square of the sum.

#include <iostream>

// in C++, caret operator (^) is bitwise XOR
// so 100^2 is not 10000 but rather 102
// to do exponents, use std::pow(100, 2) in cmath (#include <cmath>)

int sumSquares() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i*i;
    }
    //std::cout << "sumsquares: " << sum << std::endl;
    return sum;
}

int squareSum() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    //std::cout << "squaresum: " << sum*sum << std::endl;
    return sum*sum;
}

int main() {
    std::cout << squareSum() - sumSquares() << std::endl;
}

//Answer: 25164150