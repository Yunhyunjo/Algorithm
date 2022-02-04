#include <iostream>
#include <vector>

using namespace std;

int n, mini = 2147000000;
vector <vector <pair <int, int>> > v;
int ch[20] = { 1, };
void dfs(int k, int sum) {

	if (k + 1 == n) {
		if (mini > sum) mini = sum;
		return;
	}
	int cnt = 0;
	for (int i = 0; i < v[k].size(); i++) {
		if (ch[v[k][i].first] == 0) {
			ch[v[k][i].first] = 1;
			dfs(v[k][i].first, sum + v[k][i].second);
			ch[v[k][i].first] = 0;
		}
	}
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int m, a, b, c;
	cin >> n >> m;

	v.resize(n);
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		v[a - 1].push_back(make_pair(b - 1, c));
	}

	dfs(0, 0);

	cout << mini;

	return 0;
}