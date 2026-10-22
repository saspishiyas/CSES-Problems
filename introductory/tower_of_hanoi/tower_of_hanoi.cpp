#include <bits/stdc++.h>
using namespace std;

void move(int n, int src, int dest, int aux, vector<pair<int, int>>& moves){
	if(n == 1) {
		moves.push_back({src, dest});
		return;
	}

	move(n-1, src, aux, dest, moves);
	move(1, src, dest, aux, moves);
	move(n-1, aux, dest, src, moves);
}

void print(vector<pair<int, int>> arr){
	for(int i = 0; i < arr.size(); i++){
		cout << arr[i].first << " " << arr[i].second << "\n";
	}
}

int main() {
    	std::ios_base::sync_with_stdio(false);
    	std::cin.tie(NULL);

    	int n;
	vector<pair<int, int>> moves;
	cin >> n;

	move(n, 1, 3, 2, moves);
	
	cout << moves.size() << "\n";
	print(moves);
	

    	return 0;
}

