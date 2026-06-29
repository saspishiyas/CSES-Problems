#include <iostream>

int main(){
    std::string input;
    input.reserve(1000000);
    std::cin >> input;
    int input_len = input.size();

    int count[26]{0};
    int odds = 0;

    for(int i = 0; i < input.size(); i++){
        count[int(input[i] - int('A'))]++;
    }

    for(int i = 0; i < 26; i++){
        if(count[i]%2 == 1){
            odds++;
        }
    }

    if(odds > 1){
        std::cout << "NO SOLUTION";
        return 0;
    }

    std::string output(input.length(), '0');

    if(odds == 1){
        int a = 1;
        int k = (input_len - 1)/2;

        for(int i = 0; i < 26; i++){

            if(count[i]%2){
                output[k] = char('A' + i);
                count[i]--;
            }

            for(;count[i] > 0; count[i] -= 2){
                output[k - a] = char('A' + i);
                output[k + a] = char('A' + i);
                a++; 
            }
        }
    }

    if(odds == 0){
        int a = 0;
        int k = input_len;

        for(int i = 0; i < 26; i++){
            for(; count[i] > 0; count[i] -= 2){
                output[a] = char('A' + i);
                output[k - a - 1] = char('A' + i);
                a++;
            }
        }
    }

    std::cout << output;
}