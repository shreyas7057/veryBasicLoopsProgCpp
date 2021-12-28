// Write a program that keep on accepting number from the user until user enters Zero. Display the sum and average of all the numbers.

#include<iostream>

int main() {
    
    int n,s=0,i=0;

    while(n!=0) {
        std::cout<<"Enter number: ";
        std::cin>>n;
        s = s+n;
        i = i+1;
    }

    std::cout<<"Sum is: "<<s<<std::endl;
    std::cout<<"Average is: "<<s/i<<std::endl;
}