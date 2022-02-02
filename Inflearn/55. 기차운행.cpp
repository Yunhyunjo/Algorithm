#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, now = 1;
	cin >> n;

	vector <int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	stack <int> s;
	string str = "";
	for (int i = 0; i < n; i++) {
		s.push(v[i]);
		str += 'P';
		while (!s.empty() && s.top() == now) {
			s.pop();
			str += 'O';
			now++;
		}
	}

	if (s.empty()) cout << str;
	else cout << "impossible";

	return 0;
}



