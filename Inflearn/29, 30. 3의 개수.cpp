#include <iostream>

using namespace std;

/*

각 자리의 수가 3이 총 몇 번 오는 지를 구해서 더해줘야 한다.
ex) 5367, 현재 자리수 6
lt = 53이고 rt = 7
6은 3보다 크므로 lt + 1 = 54 번 그리고 6이 10의 자리수이므로 * 10 해서 십의 자리에서는 3이 총 540번 나온다.

*/
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