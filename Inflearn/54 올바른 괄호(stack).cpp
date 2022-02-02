#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s;
	cin >> s;

	stack <char> ss;
	int i = 1;
	
	for(int i = 0; i < s.size(); i++){
		if (s[i] == '(') ss.push('(');
		else {
			if (ss.empty()) {
				cout << "NO";
				return 0;
			}
			else ss.pop();
		}
	}

	if (ss.empty()) cout << "YES";
	else cout << "NO";

	return 0;
}



