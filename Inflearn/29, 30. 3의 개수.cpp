#include <iostream>
#include <vector>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k = 1, cnt = 0, cur, rt, lt, tmp;

	cin >> n;
	cur = n % 10;
	tmp = n;
	while (cur != 0){
		rt = n % k;
		lt = n / (k * 10);

		if (cur > 3) {
			cnt += ((lt + 1) * k);
		}
		else if (cur == 3) {
			cnt += (lt * k + rt + 1);
		}
		else {
			cnt += (lt * k);
		}
		k *= 10;
		cur = (n / k) % 10;
	}

	cout << cnt;

	return 0;
}