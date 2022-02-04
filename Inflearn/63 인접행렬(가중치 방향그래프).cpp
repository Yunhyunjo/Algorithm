#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m, arr[20][20] = { 0, }, a, b, c;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		arr[a - 1][b - 1] = c;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	

	return 0;
}