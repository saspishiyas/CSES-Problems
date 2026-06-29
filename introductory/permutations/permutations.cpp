#include <iostream>

int main(){
    int num = 0;
    std::cin >> num;

    if(num == 1){
        std::cout << 1;
        return 0;
    }

    if(num < 4){
        std::cout << "NO SOLUTION";
        return 0;
    }

    for(int i = 1; i <= (num/2); i++){
        std::cout << (i*2) << "\n";
    }

    for(int i = 0; i <= ((num-1)/2); i++){
        std::cout << ((i*2) + 1) << "\n";
    }
}