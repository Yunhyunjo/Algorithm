#include <iostream>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m;

	cin >> n >> m;
	
	queue <int> q;

	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}
	
	int c = 0;
	while (q.size() != 1) {
		c++;
		int a = q.front();
		q.pop();

		if (c % m != 0) q.push(a);
	}

	cout << q.front();
	
	return 0;
}