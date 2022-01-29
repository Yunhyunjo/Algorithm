#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int ch[10001];
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;

	cin >> n;

	// 소인수 분해를 통해 2와 5의 숫자가 몇개가 있는지 파악 후 작은 수를 출력
	for (int i = n; i >= 2; i--) {
		int num = i;
		int j = 2;
		while (num != 1) {
			if (num % j == 0) {
				ch[j]++;
				num /= j;
			}
			else j++;
		}
	}

	cout << ((ch[2] < ch[5])? ch[2] : ch[5]);


	return 0;
}