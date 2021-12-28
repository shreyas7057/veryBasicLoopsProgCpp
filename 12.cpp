// Accept 10 numbers from the user and display their average.

#include<iostream>

int main() {
    int s = 0;
    for(int i=1;i<=10;i++) {
        
        s = s+i;
    }

    std::cout<<s<<std::endl;
    std::cout<<"Average is: "<<(s/10);
    return 0;
}