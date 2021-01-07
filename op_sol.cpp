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
		int ans = -1;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			if (ans < a && k % a == 0) {
				ans = a;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
