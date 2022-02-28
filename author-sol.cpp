#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
	if (a == 0) {
		return b;
	}
	return GCD(b % a , a);
}

void TestCase() {
	int b, c;
	cin >> b >> c;
	// the equation looks like this: (a * b) / c
	// to get the minimum value, convert b / c into its simplest form
	// after dividing the answer is c itself
	// example: let b = 8, c = 12
	// = 8a / 12
	// = 2a / 3
	// = 2(3) / 3 -> we need to cancel c, so use c itself
	// = 2
	cout << c / GCD(b, c) << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for (int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}
