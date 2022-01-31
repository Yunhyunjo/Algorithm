#include <iostream>
#include <vector>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int s, n;

	cin >> s >> n;
	vector <int> c(s, 0);

	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		for (int j = 0; j < s; j++) {
			if (c[j] == a || c[j] == 0) {
				for (int k = j; k > 0; k--) {
					c[k] = c[k - 1];
				}
				c[0] = a;
				break;
			}
		}
		if (c[0] == a) continue;
		for (int j = s - 1; j > 0; j--) {
			c[j] = c[j - 1];
		}
		c[0] = a;
	}

	for (int i = 0; i < s; i++) {
		cout << c[i] << " ";
	}

	return 0;
}

// 강사님 코드
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//
//	int s, n, a, pos, j;
//
//	cin >> s >> n;
//	vector <int> c(s, 0);
//
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		pos = -1;
//		for (j = 0; j < s; j++) if (c[j] == a) pos = j;  // cache hit
//		if (pos == -1) for (j = s - 1; j > 0; j--) c[j] = c[j - 1]; // cache miss
//		else for (j = pos; j > 0; j--) c[j] = c[j - 1];
//		c[j] = a;
//	}
//
//	for (int i = 0; i < s; i++) {
//		cout << c[i] << " ";
//	}
//
//	return 0;
//}