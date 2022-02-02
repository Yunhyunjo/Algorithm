#include <iostream>
#include <vector>

using namespace std;

/*
투포인터 알고리즘을 활용하면 되고 2,3,5 세 가지 이므로 세개의 포인터를 사용한다.
세 개를 전부 비교하여 가장 작은 값을 저장하고 포인터를 ++해주면 된다.
*/

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, p2 = 1, p3 = 1, p5 = 1, min = 2147000000, i = 1;
	cin >> n;

	vector <int> v(n+1);
	v[1] = 1;
	while (--n) {
		if (v[p2] * 2 < v[p3] * 3) min = v[p2] * 2;
		else min = v[p3] * 3;
		if (min > v[p5] * 5) min = v[p5] * 5;
		if (v[p2] * 2 == min) p2++;
		if (v[p3] * 3 == min) p3++;
		if (v[p5] * 5 == min) p5++;
		v[++i] = min;
	}

	cout << v[i];

	return 0;
}



