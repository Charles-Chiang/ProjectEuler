// Problem 4
// A palindromic number reads the same both ways. The largest palindrome made 
// from the product of two 2-digit numbers is 9009 = 91 × 99.

// Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
#include <string>

//checks if palindrome
bool checkPal(int num) {
    auto s = std::to_string(num);
    int size = s.length();
    for (int i = 0; i< size; i++) {
        if (s[i] != s[size-i-1]) {
            return false;
        }
    }
    return true;
}

int method() {
    int largest = 0;
    int num = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            num = i*j;
            if (checkPal(num) && num > largest) {
                //std::cout << i << "x" << j << " = " << num << std::endl;
                largest = num;
            }
        }
    }
    return largest;
}

int main() {
    std::cout << method() << std::endl;
}

//Answer: 906609