#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	vector <vector <int>> v(7);
	int a, b;
	for (int i = 0; i < 6; i++) {
		cin >> a >> b;
		v[a - 1].push_back(b - 1);
	}

	queue <int> q;
	q.push(0);
	while (!q.empty()) {
		int a = q.front();
		q.pop();
		cout << a + 1 << " ";
		for (int i = 0; i < v[a].size(); i++) {
			q.push(v[a][i]);
		}
	}

	return 0;
}