#include <iostream>
#include <vector>
#define ll long long

int main(){
    ll t;
    std::cin >> t;
    ll sum = t*(t+1)/2;   

    if(sum%2 == 1){
        std::cout << "NO";
        return 0;
    }
    std::cout << "YES" << '\n';

    std::vector<int> set1, set2;
    set1.reserve(t);
    set2.reserve(t);

    ll sum_req = sum/2;
    for(int i = t; i > 0; i--){
        if(sum_req - i >= 0){
            set1.push_back(i);
            sum_req = sum_req - i;
        }
        else{
            set2.push_back(i);
        }
    }

    std::cout << set1.size() << '\n';  
    for(int i = 0; i < set1.size(); i++){
        std::cout << set1[i] << '\n';
    }

    std::cout << set2.size() << '\n';  
    for(int i = 0; i < set2.size(); i++){
        std::cout << set2[i] << '\n';
    }
}