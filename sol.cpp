#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b) {
	if (a == 0) {
		return b;
	}
	return GCD(b % a , a);
}

void TestCase() {
	long long b, c;
	cin >> b >> c;
	// find the LCM of b and c and divide it by b to produce the minimum answer
	// b * c = GCD(b, c) * LCM(b, c)
	// LCM(b, c) = (b * c) / GCD(b , c)
	long long lcm = (b * c) / GCD(b, c);
	cout << lcm / b << '\n';
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
