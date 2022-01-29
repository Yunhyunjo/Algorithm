#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;

	cin >> n;
	vector <int> v(n + 1, 0);

	for (int i = 2; i <= n; i++) {
		int num = i;
		int j = 2;
		while (num != 1)
		{
			// 소인수 분해
			if (num % j == 0) {
				v[j]++;
				num /= j;
			}
			else j++;
		}
	}

	cout << n << "! = ";
	for (int i = 2; i <= n; i++) {
		if (v[i] != 0) cout << v[i] << " ";
	}

	return 0;
}

//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//
//	int n;
//
//	cin >> n;
//	vector <int> v(n + 1, 0);
//	
//	for (int i = 2; i <= n; i++) {
//		for (int j = i + i; j <= n; j += i) {
//			v[j] = -1;
//		}
//	}
//
//	for (int i = n; i >= 2; i--) {
//		for (int j = 2; j <= n; j++) {
//			if (v[j] != -1) {
//				int num = i;
//				while (num % j == 0) {
//					v[j]++;
//					num /= j;
//				}
//			}
//		}
//	}
//	cout << n << "! = ";
//	for (int i = 2; i <= n; i++) {
//		if (v[i] != -1) cout << v[i] << " ";
//	}
//
//	return 0;
//}