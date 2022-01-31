#include <iostream>
#include <vector>

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

	for (int i = 1; i < n; i++) {
		int tmp = v[i];
		int j = i - 1;
		for (j; j >= 0; j--) {
			if (tmp < v[j]) {
				v[j + 1] = v[j];
			}
			else break;
		}
		v[j + 1] = tmp;
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	return 0;
}