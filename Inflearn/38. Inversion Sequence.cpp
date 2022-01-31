#include <iostream>
#include <vector>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int s, n;

	cin >> n;
	vector <int> is(n, 0);
	vector <int> v(n, 0);

	int a, j;
	for (int i = 0; i < n; i++) {
		cin >> is[i];
		v[i] = i + 1;
	}

	for (int i = n - 2; i >= 0; i--) {
		for (j = i; j < i + is[i]; j++) {
			v[j] = v[j + 1];
		}
		v[j] = i + 1;
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	return 0;
}