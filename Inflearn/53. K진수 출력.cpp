#include <iostream>
#include <stack>
#include <string>

using namespace std;

string converter(int n, int k) {
	stack <char> s;

	string ss = "0123456789ABCDEF";

	while (n >= k) {
		int i = n % k;
		s.push(ss[i]);
		n /= k;
	}
	s.push(ss[n]);
	

	string str = "";
	while (!s.empty()) {
		str += s.top();
		s.pop();
	}

	return str;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k;
	cin >> n >> k;

	cout << converter(n, k);

	return 0;
}



