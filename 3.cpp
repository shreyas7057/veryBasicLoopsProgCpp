// Write a program to print first 10 odd numbers.

#include<iostream>

int main() {

    for(int i=1;i<=10;i++) {
        if(i%2!=0) {
            std::cout<<i<<std::endl;
        }
    }

    return 0;
}