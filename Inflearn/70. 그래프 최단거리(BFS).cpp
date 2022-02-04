#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n, m, a, b;
	cin >> n >> m;
	vector <vector <int>> v(n);
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a - 1].push_back(b - 1);
	}
	int arr[20] = { 0, };
	int ch[20] = { 1, };
	queue <int> q;
	q.push(0);
	while (!q.empty()) {
		int a = q.front();
		q.pop();
		for (int i = 0; i < v[a].size(); i++) {
			if (ch[v[a][i]] == 0) {
				q.push(v[a][i]);
				arr[v[a][i]] = arr[a] + 1;
				ch[v[a][i]] = 1;
			}
		}
	}

	for (int i = 1; i < n; i++) {
		cout << i + 1 << " : " << arr[i] << "\n";
	}

	return 0;
}