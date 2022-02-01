#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
맨 처음부터 말을 배치하는 것이 가장 최선의 방식이므로 맨 처음 배치 후 mid만큼 떨어트려
배치하고 m마리의 말을 다 배치할 수 있는지를 계산해 본다.
*/


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m, mid, lt = 1, rt, res;

	cin >> n >> m;
	
	vector <int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	lt = 1;
	rt = v[n-1];

	while (lt < rt) {
		mid = (lt + rt) / 2;
		int p = 0;
		int cnt = 1;
		for (int i = p + 1; i < n; i++) {
			if (v[i] - v[p] >= mid) {
				cnt++;
				p = i;
			}
		}

		if (cnt < m) rt = mid - 1;
		else {
			res = mid;
			lt = mid + 1;
		}
	}

	cout << res;
	
	return 0;
}