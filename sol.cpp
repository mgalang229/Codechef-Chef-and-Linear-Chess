#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		int p[n];
		for (int i = 0; i < n; i++) {
			cin >> p[i];
		}
		int ans = -1;
		// the answer is simply the greatest common divisor of 'k'
		for (int i = 0; i < n; i++) {
			if (k % p[i] == 0) {
				ans = max(ans, __gcd(k, p[i]));
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
