#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 반례존재
 ==> 최소값이 1이 아닌 가장 긴 재생시간이 다 들어갈 수 있는 길이어야함.
*/

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m, mid, rt = 0, c, res, lt = 0;

	cin >> n >> m;

	vector <int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		rt += v[i];
		lt = max(lt, v[i]);
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