#include <iostream>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s, str = "";
	int i, w = 0;

	cin >> s;
	
	if (s[1] != 'H') {
		i = 1;
		while (s[i] != 'H') {
			str += s[i++];
		}
		w = 12 * stoi(str);
		i++;
		str = "";
	}
	else {
		w = 12;
		i = 2;
	}

	if (s.size() == i) cout << w + 1;
	else {
		for (i; i < s.size(); i++) {
			str += s[i];
		}
		cout << w + stoi(str);
	}


	return 0;
}