#include <iostream>

using namespace std;

int n, r;
int ch[15];
int arr[15];
int tmp[15];
int cnt = 0;
void dfs(int k) {

	if (k == r) {
		for (int i = 0; i < r; i++) {
			cout << tmp[i] << " ";
		}
		cout << "\n";
		cnt++;
		return;
	}

	for (int i = 0; i < n; i++) {
		if (ch[i] == 0) {
			ch[i] = 1;
			tmp[k] = arr[i];
			dfs(k + 1);
			ch[i] = 0;
		}
	}
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> r;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	dfs(0);
	cout << cnt;

	return 0;
}