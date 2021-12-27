// Write a program to display product of the digits of a number accepted from the user.

#include<iostream>

int main() {

    int n;

    std::cout<<"Enter number: ";
    std::cin>>n;

    int k = 1;

    for(int i=1;i<=n;i++) {
        k = i*k;
    }

    std::cout<<"Product is: "<<k;

    return 0;
}