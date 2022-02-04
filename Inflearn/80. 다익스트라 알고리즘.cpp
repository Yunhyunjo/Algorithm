#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int ch[25];

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n, m;
	cin >> n >> m;

	int a, b, c;
	vector <vector <pair<int, int>>> v(n);
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		v[a - 1].push_back(make_pair(b - 1,c));
	}

	vector <int> dist(n, 2147000000);
	dist[0] = 0;

	priority_queue <pair<int, int>, vector <pair<int, int>>, greater <pair<int, int>>> pq;
	pq.push(make_pair(0, 0));

	while (!pq.empty()) {
		int val = pq.top().first;
		int nv = pq.top().second;
		pq.pop();
		if (val > dist[nv]) continue;
		for (int i = 0; i < v[nv].size(); i++) {
			int next = v[nv][i].first;
			int nextDis = val + v[nv][i].second;
			if (dist[next] > nextDis) {
				pq.push(make_pair(nextDis, next));
				dist[next] = nextDis;
			}
		}
	}

	for (int i = 1; i < n; i++) {
		if (dist[i] == 2147000000) cout << i + 1 << " : " << "impossible" << "\n";
		else cout << i + 1 << " : " << dist[i] << "\n";
	}

	return 0;
}

/*int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;

	int a, b, c;
	vector <vector <pair<int, int>>> d(n);
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		d[a - 1].push_back(make_pair(b - 1, c));
	}

	vector <int> v(n, 2147000000);
	v[0] = 0;
	for (int i = 0; i < d[0].size(); i++) {
		v[d[0][i].first] = d[0][i].second;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < d[i].size(); j++) {
			v[d[i][j].first] = min(v[d[i][j].first], v[i] + d[i][j].second);
		}
	}

	for (int i = 1; i < n; i++) {
		if (v[i] == 2147000000) cout << i + 1 << " : " << "impossible" << "\n";
		else cout << i + 1 << " : " << v[i] << "\n";
	}

	return 0;
}*/