#include <iostream>
#include <vector>

int main(){
    int len = 0;
    std::cin >> len;

    long long int steps = 0;

    std::vector<int> numbers(len);

    for(int i = 0; i < len; i++){
        std::cin >> numbers[i];
    }

    for(int i = 1; i < len; i++){
        if(numbers[i-1] > numbers[i]){
            steps += (numbers[i-1] - numbers[i]);
            numbers[i] = numbers[i-1];
        }
    }

    std::cout << steps;
}