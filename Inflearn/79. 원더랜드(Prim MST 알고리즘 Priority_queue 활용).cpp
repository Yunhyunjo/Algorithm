#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int ch[25];

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int v, e;
	cin >> v >> e;

	int a, b, c;
	vector <vector <pair<int, int>>> d(v);
	for (int i = 0; i < e; i++) {
		cin >> a >> b >> c;
		d[a - 1].push_back(make_pair(b - 1,c));
		d[b - 1].push_back(make_pair(a - 1,c));
	}

	priority_queue <pair <int, int>, vector <pair <int, int>>, greater <pair <int, int>>> pq;
	
	pq.push(make_pair(0, 0));
	int mini = 0;
	int num = 0;
	while (num != v) {
		pair <int, int> a = pq.top();
		pq.pop();
		if (ch[a.second] != 0) continue;
		ch[a.second] = 1;
		num++;
		mini += a.first;
		for (int i = 0; i < d[a.second].size(); i++) {
			pq.push(make_pair(d[a.second][i].second, d[a.second][i].first));
		}
	}

	cout << mini;

	return 0;
}