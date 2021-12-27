// Write a program to print first 10 even numbers in reverse order.

#include<iostream>

int main() {

    for(int i=10;i>0;i--) {
        if(i%2==0) {
            std::cout<<i<<std::endl;
        }
    }


    return 0;
}