#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

/*
맨 마지막 일차 부터 채우면 갯수를 생각할 필요가 없다.
구조체를 만들어서 먼저 정렬한 후 우선순위 큐를 이용해서 하면 된다.
*/

struct Lec {
	int m, d;

	Lec(int m, int d) {
		this->m = m;
		this->d = d;
	}

	bool operator<(const Lec& a)const {
		return d > a.d;
	}
};

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n, m, d, p = 0, sum = 0, dd;
	cin >> n;

	vector <Lec> v;
	for (int i = 0; i < n; i++) {
		cin >> m >> d;
		v.push_back(Lec(m, d));
	}

	sort(v.begin(), v.end());
	dd = v[0].d;
	priority_queue <int> pq;
	int j = 0;
	for (int i = dd; i > 0; i--) {
		for (; j < n; j++) {
			if (i > v[j].d) break;
			pq.push(v[j].m);
		}
		if (!pq.empty()) {
			sum += pq.top();
			pq.pop();
		}
	}

	cout << sum;

	return 0;
}