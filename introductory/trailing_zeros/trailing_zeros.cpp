#include <iostream>

int main(){
    unsigned int t;

    std::cin >> t;

    unsigned int five = 0;

    for(int i = 5; i <= t; i *= 5){
        five += t/i;
    }

    std::cout << five;
}