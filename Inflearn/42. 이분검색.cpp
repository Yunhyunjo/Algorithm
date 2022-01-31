#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m, mid, lt = 0, rt;

	cin >> n >> m;
	
	vector <int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	rt = n - 1;
	while (lt <= rt) {
		mid = (lt + rt) / 2;
		if (v[mid] > m) rt = mid - 1;
		else if (v[mid] < m) lt = mid + 1;
		else break;
	}

	cout << mid + 1;
	
	return 0;
}