#include <iostream>

using namespace std;

int arr[21][21];

int memo(int x, int y) {
	if (arr[x][y]) return arr[x][y];
	if (y == 0 || x == y) return 1;
	return arr[x][y] = memo(x - 1, y - 1) + memo(x - 1, y);
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n, r;
	cin >> n >> r;

	cout << memo(n, r);

	return 0;
}