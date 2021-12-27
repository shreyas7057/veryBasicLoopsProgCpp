// Write a program to print table of a number accepted from user.

#include<iostream>

int main() {

    int n;

    std::cout<<"Enter which number table: ";
    std::cin>>n;

    for(int i=1;i<=10;i++) {
        std::cout<<n<<"X"<<i<<"="<<n*i<<std::endl;
    }

    return 0;
}