#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	string s;
	cin >> n >> s;
	int ones = 0;
	int zeroes = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			// every time it encounters '1', increment 'ones' and decrement 'zeroes'
			ones++;
			zeroes--;
		} else {
			// otherwise, increment 'zeroes' and decrement 'ones'
			zeroes++;
			ones--;
		}
	}
	// print the maximum between 'ones' and 'zeroes' (the maximum value that will remain)
	cout << max(ones, zeroes) << '\n';
	return 0;
}
