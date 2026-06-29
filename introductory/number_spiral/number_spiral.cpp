#include <iostream>
#include <vector>

long int calc_spiral(long int y, long int x){
    long int spiral;
    
    if(x > y){
        if(x%2 == 1){
            spiral = (x*x) - long(y-1);
        }
        else{
            spiral = (long(x-1)*long(x-1)) + y;
        }
    }
    else{
        if(y%2 == 0){
            spiral = (y*y) - long(x-1);
        }
        else{
            spiral = (long(y-1)*long(y-1)) + x;
        }
    }

    return spiral;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    std::vector<long int> numbers(t);

    for(int i = 0; i < t; i++){
        long int y, x;
        std::cin >> y >> x;

        numbers[i] = calc_spiral(y, x);
    }

    for(int i = 0; i < t; i++){
        std::cout << numbers[i] << '\n';
    }
}
