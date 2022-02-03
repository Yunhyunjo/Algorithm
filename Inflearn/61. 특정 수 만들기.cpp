#include <iostream>

using namespace std;

int arr[11];
int n, m, cnt = 0;

void dfs(int L, int sum) {

	if (L == n + 1) {
		if(sum == m) cnt++;
		return;
	}
	dfs(L + 1, sum + arr[L]);
	dfs(L + 1, sum);
	dfs(L + 1, sum - arr[L]);
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	dfs(1, 0);
	if (cnt == 0) cout << -1;
	else cout << cnt;

	return 0;
}