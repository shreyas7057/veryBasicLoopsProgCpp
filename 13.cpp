// Write a program to print all prime numbers  that fall between two numbers including both(accept two numbers from the user)


#include<iostream>

int main() {


    int start,end;

    std::cout<<"Enter the range of prime numbers: ";
    std::cin>>start>>end;


    for(int i=start;i<=end;i++) {

        if(i%2!=0) {
            std::cout<<i<<std::endl;
        }
    }

    return 0;
}