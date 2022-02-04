#include <iostream>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n;
	priority_queue <int> q;
	while (1) {
		cin >> n;
		if (n == 0) {
			if (q.empty()) cout << -1 << "\n";
			else {
				cout << q.top();
				q.pop();
			}
		}
		else if (n == -1) break;
		else {
			q.push(n);
		}
	}

	return 0;
}