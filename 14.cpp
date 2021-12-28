// Write a program to display sum of odd numbers and even numbers that fall between 12 and 37(including both numbers)


#include<iostream>

int main() {

    int sumOdd = 0,sumEven = 0;

    for(int i=12;i<=37;i++) {
        if(i%2==0) {
            sumEven = sumEven+i;
            
        }
        else {
            sumOdd = sumOdd+i;
            
        }
    }
    std::cout<<"Sum of Even: "<<sumEven<<std::endl;
    std::cout<<"Sum of Odd: "<<sumOdd<<std::endl;

    return 0;
}