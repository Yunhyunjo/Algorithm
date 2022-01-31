#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, cnt = 0, num = 2, hap = 3, r;

	cin >> n;

	while (hap <= n) {
		r = n - hap;
		if (r % num == 0) {
			int a = r / num;
			cout << a + 1;
			for (int i = 2; i <= num; i++) {
				cout << " + " << a + i;
			}
			cout << " = " << n << "\n";
			cnt++;
		}
		num++;
		hap += num;
	}

	cout << cnt;
	
	
	return 0;
}

/*
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, cnt = 0;

	cin >> n;

	for (int i = n / 2 + 1; i > 0; i--) {
		int num = i;
		int sum = num;
		while (num--) {
			if (sum > n) break;
			else if (sum < n) sum += num;
			else {
				cout << num + 1;
				for (int j = num + 2; j <= i; j++) {
					cout << " + " << j;
				}
				cout << " = " << n << "\n";
				cnt++;
				break;
			}
		}
	}

	cout << cnt;

	return 0;
}
*/