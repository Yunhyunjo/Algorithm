#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int ch[10001] = { 0, }, x[3] = { 1, -1, 5 };
	int s, e;
	cin >> s >> e;

	ch[s] = 1;

	queue<int> q;
	q.push(s);
	while (!q.empty()) {
		int a = q.front();
		if (a == e) break;
		q.pop();
		for (int i = 0; i < 3; i++) {
			int xx = a + x[i];
			if (xx > 0 && xx <= 10000 && ch[xx] == 0) {
				ch[xx] = ch[a] + 1;
				q.push(xx);
			}
		}
	}

	cout << ch[e] - 1;

	return 0;
}