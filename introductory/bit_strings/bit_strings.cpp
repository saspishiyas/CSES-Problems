#include <iostream>
#define ll long long unsigned int
#define mod 1000000007

int main(){
    int t;
    std::cin >> t;

    ll x = 0x1;

    for(int i = 0; i < t; i++){
        x = (x << 1)%mod;
    }

    std::cout << x;
}