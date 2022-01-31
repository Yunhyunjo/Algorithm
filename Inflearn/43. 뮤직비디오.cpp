#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m, mid, lt = 1, rt = 0, c, res;

	cin >> n >> m;
	
	vector <int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		rt += v[i];
	}

	while (lt <= rt) {
		c = 1;
		mid = (lt + rt) / 2;
		int tmp = 0;
		for (int i = 0; i < n; i++) {
			if (tmp + v[i] <= mid) tmp += v[i];
			else {
				c++;
				tmp = v[i];
			}
		}
		if (c <= m) {
			rt = mid - 1;
			res = mid;
		}
		else lt = mid + 1;
	}

	cout << res;
	
	return 0;
}