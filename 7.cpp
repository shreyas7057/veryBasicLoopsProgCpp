// Write a program to find the factorial of a number.

#include<iostream>

int main() {

    int n, i, fact;
    std::cin >> n;
    fact = n;

    for (i = 1; i < n; i++) {
        fact = fact * (n - i);
    }

    std::cout << fact;

    return 0;
}