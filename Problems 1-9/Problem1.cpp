// Problem 1
// If we list all the natural numbers below 10 that are multiples of 3 or 5, 
// we get 3, 5, 6 and 9. The sum of these multiples is 23.

// Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>

//method 1 - the CS major
int method1 () {
    int sum = 0;
    for (int i = 1; i < 1000; i++) {
        if (i%15 == 0) {
            sum += i;
        } else if (i%3 == 0) {
            sum += i;
        } else if (i%5 == 0) {
            sum += i;
        }
    }
    return sum;
}

//method 2 - the math major (math you can do on a piece of paper) (maybe with a calculator)
int method2 () {
    int sum;
    int mod15 = 999/15;
    int mod3 = 999/3;
    int mod5 = 999/5;

    int sum3s = (1+mod3)*mod3/2;
    int sum5s = (1+mod5)*mod5/2;
    int sum15s = (1+mod15)*mod15/2;

    sum = sum3s*3 + sum5s*5 - sum15s*15;
    return sum;
}

int main()
{
    std::cout << method1() << std::endl;

    std::cout << method2() << std::endl;

}

// Answer: 233168