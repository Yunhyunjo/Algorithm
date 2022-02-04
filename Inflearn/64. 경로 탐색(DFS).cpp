#include <iostream>

using namespace std;

int arr[20][20];
int ch[20] = { 1, };
int n, m;

int dfs(int k) {

	int cnt = 0;
	if (k + 1 == n) return 1;
	for (int i = 0; i < n; i++) {
		if (ch[i] == 0 && arr[k][i] == 1) {
			ch[i] = 1;
			cnt += dfs(i);
			ch[i] = 0;
		}
	}
	return cnt;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;

	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		arr[a - 1][b - 1] = 1;
	}

	cout << dfs(0);

	return 0;
}