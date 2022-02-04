#include <iostream>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n, k;
	cin >> n >> k;
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	int i = 1;
	while (q.size() != 1) {
		int a = q.front();
		q.pop();
		if (i % k != 0)  q.push(a);
		i++;
	}
	
	cout << q.front();

	return 0;
}