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

	for (int i = 0; i < n; i++) {
		int k = i;
		for (int j = i + 1; j < n; j++) {
			if (v[k] > v[j]) k = j;
		}
		int tmp = v[i];
		v[i] = v[k];
		v[k] = tmp;
	}
	int i = n - 1, s = 1;
	while (s != 3) {
		if (v[i - 1] != v[i]) {
			s++;
		}
		i--;
	}

	cout << v[i];
	

	return 0;
}