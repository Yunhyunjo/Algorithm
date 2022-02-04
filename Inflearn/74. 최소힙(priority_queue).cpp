#include <iostream>
#include <queue>

using namespace std;

/*
최소힙을 구현하는 방법은 두 가지가 있다.
1. priority_queue <int> q 이렇게 최대 힙을 선언한 뒤 -를 붙여 삽입하기.
2. priority_queue <int, vector <int>, greater <int>> q 이렇게 직접 최소 힙 선언하기.
*/

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n;
	priority_queue <int, vector<int>, greater<int>> q;
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