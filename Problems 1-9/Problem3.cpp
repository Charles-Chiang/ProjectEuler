// Problem 3
// The prime factors of 13195 are 5, 7, 13 and 29.

// What is the largest prime factor of the number 600851475143 ?

#include <iostream>
#include <cmath>
#include <vector>

/* ---------------------REDUNDANT (but it works)-------------------
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
*/

void printVector(std::vector<int> vector) {
    for (auto & element : vector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int method() {
    int largest = 1;
    std::vector<int> factors;
    long long int num = 600851475143;
    long int root = std::sqrt(600851475143);
    for (long int i = 2; i <= num; i++) {
        if (num%i == 0) {
            factors.push_back(i);
            num = num/i;
            if (i > largest) {
                largest = i;
            }
            i = 1;
        }
    }

    std::cout << "Factors: ";
    printVector(factors);
    return largest;
}

int main() {
    std::cout << method() << std::endl;
}

//Answer: 6857