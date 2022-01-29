#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;

	cin >> n;
	vector <int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	cout << 1 << " ";
	for (int i = 1; i < n; i++) {
		int cnt = 0;
		for (int j = i - 1; j >= 0; j--) {
			if (v[i] <= v[j]) cnt++;
		}
		cout << cnt + 1 << " ";
	}

	return 0;
}