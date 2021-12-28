/*

* * * *

* * *

* *

*

*/


#include<iostream>

int main() {
    for(int i=4;i>=1;i--) {
        for(int j=1;j<=i;j++) {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }

    return 0;
}