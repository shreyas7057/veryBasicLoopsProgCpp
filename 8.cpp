// Write a program to find the sum of the digits of a number accepted from user


#include<iostream>

int main() {

    int n;

    std::cout<<"Enter number: ";
    std::cin>>n;

    int k = 0;

    for(int i=0;i<=n;i++) {
        k = i+k;
    }

    std::cout<<"Sum is: "<<k;

    return 0;
}