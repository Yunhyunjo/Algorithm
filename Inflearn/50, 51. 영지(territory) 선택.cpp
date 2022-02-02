#include <iostream>

using namespace std;

int v[701][701];
int dp[701][701];
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int h, w, maxi = 0, h1, w1, tmp;
	cin >> h >> w;

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cin >> v[i][j];
			dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i-1][j-1] + v[i][j];
		}
	}

	cin >> h1 >> w1;
	for (int i = h1; i <= h; i++) {
		for (int j = w1; j <= w; j++) {
			tmp = dp[i][j] - dp[i - h1][j] - dp[i][j - w1] + dp[i - h1][j - w1];
			if (tmp > maxi) maxi = tmp;
		}
	}

	cout << maxi;

	return 0;
}