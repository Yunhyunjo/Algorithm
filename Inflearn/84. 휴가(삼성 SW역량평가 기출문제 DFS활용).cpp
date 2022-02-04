#include <iostream>

using namespace std;

int t[15], p[15];
int n, maxi = 0;

void dfs(int k, int sum) {

	if (k > n) return;
	else {
		if (maxi < sum) maxi = sum;
	}

	for (int i = k; i < n; i++) {
		dfs(i + t[i], sum + p[i]);
	}
}

int main() {
	
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> t[i] >> p[i];
	}
	
	dfs(0, 0);

	cout << maxi;

	return 0;
}