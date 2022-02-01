#include <iostream>

using namespace std;

int arr[52][52];

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, cnt = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			bool flag = true;
			for (int k = 0; k < 4; k++) {
				if (arr[i][j] <= arr[i + dx[k]][j + dy[k]]) {
					flag = false;
					break;
				}
			}
			if (flag) {
				cnt++;
				j++;
			}
		}
	}

	cout << cnt;
	
	return 0;
}