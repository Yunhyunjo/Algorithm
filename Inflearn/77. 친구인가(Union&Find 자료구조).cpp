#include <iostream>
#include <vector>

using namespace std;

int arr[1001];

int find(int a) {
	if (arr[a] == a) return a;
	return arr[a] = find(arr[a]);
}

void union_(int a, int b) {
	int aa = find(a);
	int bb = find(b);
	if (aa != bb) arr[aa] = bb;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}

	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		union_(a, b);
	}

	cin >> a >> b;
	int aa = find(a);
	int bb = find(b);

	if (aa == bb) cout << "YES";
	else cout << "NO";

	return 0;
}