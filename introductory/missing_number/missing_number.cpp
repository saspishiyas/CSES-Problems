#include <iostream>

int main(){
    long long int num = 0;
    std::cin >> num;

    long long int calc_sum = num*(num + 1)/2;
    long long int input_sum = 0;

    for(int i = 1; i < num; i++){
        int input = 0;
        std::cin >> input;
        input_sum += input;
    }

    std::cout << calc_sum - input_sum;
}