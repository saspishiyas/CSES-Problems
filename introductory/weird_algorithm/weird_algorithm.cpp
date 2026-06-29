#include <iostream>

int main(){
    long int a = 10;
    std::cin >> a;

    while(a != 1){

        std::cout << a << std::endl;
        if(a%2){
            a = a*3 + 1;
        }
        else{
            a = a/2;
        }
    }
    std::cout << a;
}