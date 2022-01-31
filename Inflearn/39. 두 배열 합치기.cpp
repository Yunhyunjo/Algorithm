#include <iostream>
#include <vector>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int s, n, m;

	cin >> n;
	vector <int> a(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cin >> m;
	vector <int> b(m, 0);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	vector <int> v(n + m);
	int i = 0, j = 0, k = 0;
	while (i < n && j < m) {
		if (a[i] < b[j]) v[k++] = a[i++];
		else v[k++] = b[j++];
	}

	while (i < n) v[k++] = a[i++];
	while (j < m) v[k++] = b[j++];

	for (int i = 0; i < n + m; i++) {
		cout << v[i] << " ";
	}

	return 0;
}