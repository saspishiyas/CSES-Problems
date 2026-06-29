#include <iostream>
#include <vector>
#define ll long long

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    std::vector<bool> ans(t);



    for(int i = 0; i < t; i++){
        ll x, y;
        std::cin >> x >> y;
        ll m, n;
        m = 2*x - y;
        n = 2*y - x;
        if(m >= 0 && n >= 0 && (m%3 == 0) && (n%3 == 0)){
            ans[i] = true;
        }
        else{
            ans[i] = false;
        }
    }

    for(int i = 0; i < t; i++){
        if(ans[i]){
            std::cout << "YES\n";
        }
        else{
            std::cout << "NO\n";
        }
    }
}
