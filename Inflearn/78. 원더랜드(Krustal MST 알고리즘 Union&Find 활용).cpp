#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[26];

struct Data {
	int v1, v2, c;

	Data(int v1, int v2, int c) {
		this->v1 = v1;
		this->v2 = v2;
		this->c = c;
	}

	bool operator<(const Data& d)const {
		return c < d.c;
	}
};

int find(int a) {
	if (arr[a] == a) return a;
	return arr[a] = find(arr[a]);
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int v, e;
	cin >> v >> e;

	int a, b, c;
	vector <Data> d;
	for (int i = 0; i < e; i++) {
		cin >> a >> b >> c;
		d.push_back(Data(a, b, c));
	}

	for (int i = 1; i <= v; i++) {
		arr[i] = i;
	}

	sort(d.begin(), d.end());
	
	int mini = 0;
	for (int i = 0; i < e; i++) {
		int a = find(d[i].v1);
		int b = find(d[i].v2);
		if (a != b) {
			arr[a] = b;
			mini += d[i].c;
		}

	}

	cout << mini;

	return 0;
}