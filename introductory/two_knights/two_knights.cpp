#include <iostream>

long int combinations(long int k);

int main(){
    long int t;
    std::cin >> t;

    for(long int i = 1; i <= t; i++){
        std::cout << combinations(i) << '\n';
    }
}

long int combinations(long int k){
    if(k == 1){
        return 0;
    }
    if(k == 2){
        return 6;
    }
    if(k == 3){
        return 28;
    }
    if(k == 4){
        return 96;
    }

    long int two_move = 4 * ((k*k)-3);
    long int three_move = 8 * ((k*k)-4);
    long int four_move = 4 * (k-3) * ((k*k)-5);
    long int six_move = 4 * (k-4) * ((k*k)-7);
    long int eight_move = ((k-4)*(k-4)) * ((k*k) - 9);

    return (two_move + three_move + four_move + six_move + eight_move)/2;
}