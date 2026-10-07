#include <bits/stdc++.h>

using namespace std;

void bin(int a, int b);

int main(){

  int t;
  cin >> t;

  for(int i = 0; i < pow(2, t); i++) bin(i ^ (i >> 1), t);
}

void bin(int a, int b){
  for(int i = b-1; i >= 0; i--){
     a & (1 << i) ? cout << "1": cout << "0";
  }
  cout << endl;
}
