// Write a program to print numbers from 1 to 20 except multiple of 2 & 3.

#include<iostream>

int main() {

    for(int i=1;i<=20;i++) {
        if(i%2!=0 && i%3!=0) {
            std::cout<<i<<std::endl;
        }
    }

    return 0;
}