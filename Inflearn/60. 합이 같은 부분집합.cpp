#include <iostream>

using namespace std;

/*
* 부분집합을 꼭 구해야되는 것이 아닌 단순히 합만 구하면 되는 것이기 때문에 sum으로 비교해주면 된다.
*/

int arr[11];
int n, total = 0;
bool flag = false;

void dfs(int L, int sum) {

	if (sum > total / 2) return;
	if (flag) return;

	if (L == n + 1) {
		if(sum == total - sum) flag = true;
		return;
	}
	dfs(L + 1, sum + arr[L]);
	dfs(L + 1, sum);
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		total += arr[i];
	}

	dfs(1, 0);

	if (flag) cout << "YES";
	else cout << "NO";

	return 0;
}