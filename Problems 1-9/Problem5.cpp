// Problem 5
// 2520 is the smallest number that can be divided by each of the numbers 
// from 1 to 10 without any remainder.

// What is the smallest positive number that is evenly divisible by all of 
// the numbers from 1 to 20?

// SOLUTION
// mathematical way: 11 12 13 14 15 16 17 18 19 20
// of these numbers, only 11, 13, 16, 17, 19 we need to worry about
// 12, 14, 15, 18, and 20 are all divisible into 2520 already
// since they are factorizable into numbers 1-10
// 11, 13, 17, and 19 are prime numbers > 10
// and 16 is a special case of 2^4 whereas 2420 is only divisible by 2^3

// therefore, the answer should just be 2520 * 2 * 11 * 13 * 17 * 19

#include <iostream>

int main () {
    std::cout << 2520*2*11*13*17*19 << std::endl;
}

// gonna be honest, not entirely sure how I would do this with coding

//Answer: 232792560