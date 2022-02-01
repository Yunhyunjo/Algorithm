#include <iostream>
#include <queue>
#include <stdio.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k, sum = 0;

	cin >> n;
	
	vector <int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
	}

	cin >> k;

	int pos = 0;
	if (k < n) {
		cout << k + 1;
		return 0;
	}
	else if (sum <= k) {
		cout << -1;
		return 0;
	}
	else {
		while (k--) {
			pos %= n;
			if (v[pos] != 0) v[pos++]--;
			else {
				while (v[pos] == 0) {
					++pos %= n;
				}
				v[pos++]--;
			}
			sum--;
		}
	}
	pos %= n;
	
	if (v[pos] != 0) cout << pos + 1;
	else {
		while (v[pos] == 0) {
			++pos %= n;
		}
		cout << pos + 1;
	}
	
	return 0;
}