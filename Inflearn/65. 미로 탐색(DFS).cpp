#include <iostream>

using namespace std;

int arr[7][7];
int ch[7][7] = { 1, };
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int dfs(int x, int y) {

	if (x == 6 && y == 6) return 1;
	int px, py, cnt = 0;
	for (int i = 0; i < 4; i++) {
		px = x + dx[i];
		py = y + dy[i];
		if (px >= 0 && px < 7 && py >= 0 && py < 7 && arr[px][py] == 0 && ch[px][py] == 0) {
			ch[px][py] = 1;
			cnt += dfs(px, py);
			ch[px][py] = 0;
		}
	}
	
	return cnt;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			cin >> arr[i][j];
		}
	}

	cout << dfs(0, 0);

	return 0;
}