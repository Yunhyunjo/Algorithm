#include <iostream>

using namespace std;

int n, mini = 2147000000;
int map[20][20];
int ch[20][20] = { 1, };
void dfs(int k, int sum) {

	if (k + 1 == n) {
		if (mini > sum) mini = sum;
		return;
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (map[k][i] != 0 && ch[k][i] == 0) {
			ch[k][i] = 1;
			dfs(i, sum + map[k][i]);
			ch[k][i] = 0;
		}
	}
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int m, a, b, c;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		map[a - 1][b - 1] = c;
	}

	dfs(0, 0);

	cout << mini;

	return 0;
}