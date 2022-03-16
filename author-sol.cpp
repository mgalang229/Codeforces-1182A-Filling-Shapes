#include <bits/stdc++.h>
using namespace std;

int power(int a, int b) {
	int res = 1;
	while(b > 0) {
		if(b & 1) {
			res *= a;
		}
		a *= a;
		b >>= 1;
	}
	return res;
}

void perform_test() {
	int n;
	cin >> n;
	// if n is odd, then the answer is always 0 (we can't fill it)
	// otherwise, for every 3x2 grid in the 3xn grid, there are 2 ways
	// to fill it and since it covers 2 cells consecutively, then there
	// are n/2 3x2 cells that can be used to fill all the grid
	// therefore, the answer is 2_1 * 2_2 * ... * 2_(n/2) or 2 ^ (n/2)
	if(n & 1) {
		cout << 0;
	} else {
		cout << power(2, n / 2);
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	//cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}

