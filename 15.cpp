// Write a program to display all the numbers which are divisible by 11 but not by 2 between 100 and 500.


#include<iostream>


int main() {


    for(int i=100;i<=500;i++) {
        if(i%11==0) {
            if(i%2!=0) {
                std::cout<<i<<std::endl;
            }
        }
    }
    return 0;
}