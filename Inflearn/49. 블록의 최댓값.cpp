#include <iostream>

using namespace std;

int arr[2][10];

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, cnt = 0;
	cin >> n;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[0][i] < arr[1][j]) cnt += arr[0][i];
			else cnt += arr[1][j];
		}
	}
	
	cout << cnt;

	return 0;
}