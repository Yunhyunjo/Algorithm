#include <iostream>

using namespace std;

int ch[11];

void dfs(int n, int L) {

	if (n < L) {
		for (int i = 1; i <= n; i++) {
			if(ch[i] == 1) cout << i << " ";
		}
		cout << "\n";
	}
	else {
		ch[L] = 1;
		dfs(n, L + 1);
		ch[L] = 0;
		dfs(n, L + 1);
	}
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	dfs(n, 1);

	return 0;
}



