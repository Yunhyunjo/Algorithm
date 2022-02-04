#include <iostream>
#include <vector>

using namespace std;

struct Edge {
	int s;
	int e;
	int val;
	Edge(int a, int b, int c) {
		s = a;
		e = b;
		val = c;
	}
};

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n, m;
	cin >> n >> m;

	int a, b, c, s, e;
	vector <Edge> v;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		v.push_back(Edge(a,b,c));
	}
	cin >> s >> e;
	vector <int> dist(n + 1, 2147000000);
	
	dist[s] = 0;

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < v.size(); j++) {
			int s = v[j].s;
			int e = v[j].e;
			int val = v[j].val;
			if (dist[s] != 2147000000 && dist[e] > dist[s] + val) {
				dist[e] = dist[s] + val;
			}
		}
	}

	for (int j = 0; j < v.size(); j++) {
		int s = v[j].s;
		int e = v[j].e;
		int val = v[j].val;
		if (dist[s] != 2147000000 && dist[e] > dist[s] + val) {
			cout << -1;
			return 0;
		}
	}

	cout << dist[e];

	return 0;
}