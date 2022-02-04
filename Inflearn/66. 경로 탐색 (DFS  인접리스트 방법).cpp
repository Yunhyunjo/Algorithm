#include <iostream>
#include <vector>

using namespace std;

vector <vector <int>> v;
int n;
int ch[20] = { 1, };
int dfs(int k) {

	if (k + 1 == n) return 1;
	int cnt = 0;
	for (int i = 0; i < v[k].size(); i++) {
		if (ch[v[k][i]] == 0) {
			ch[v[k][i]] = 1;
			cnt += dfs(v[k][i]);
			ch[v[k][i]] = 0;
		}
	}
	
	return cnt;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int m, a, b;
	cin >> n >> m;

	v.resize(n);
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a - 1].push_back(b - 1);
	}

	cout << dfs(0);

	return 0;
}