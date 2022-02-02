#include <iostream>

using namespace std;

void print(int n) {

	if (n == 0) return;
	print(n / 2);
	cout << n % 2;

}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	print(n);

	return 0;
}



