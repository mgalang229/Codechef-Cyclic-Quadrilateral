#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		// check if the opposite angles add up to 180 degrees
		cout << (a + c == 180 && b + d == 180 ? "YES" : "NO") << '\n';
	}
	return 0;
}
