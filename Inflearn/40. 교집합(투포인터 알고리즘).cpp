#include <iostream>
#include <vector>
#include <algorithm>

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

	sort(a.begin(), a.end());

	cin >> m;
	vector <int> b(m, 0);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(b.begin(), b.end());

	vector <int> v;
	int i = 0, j = 0, k = 0;
	while (i < n && j < m) {
		if (a[i] < b[j]) i++;
		else if (a[i] > b[j]) j++;
		else {
			v.push_back(a[i++]);
			j++;
		}
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	return 0;
}