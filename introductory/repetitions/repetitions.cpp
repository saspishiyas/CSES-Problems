#include <iostream>
#include <vector>

int main(){
    std::string input = "";
    std::cin >> input;

    int lenmax = 1;
    int lencurrent = 1;

    for(int i = 1; i < input.length(); i++){
        if(input[i-1] == input[i]){
            lencurrent++;
        }
        else{
            lencurrent = 1;
        }

        if(lencurrent > lenmax){
            lenmax = lencurrent;
        }
    }
    std::cout << lenmax;
}