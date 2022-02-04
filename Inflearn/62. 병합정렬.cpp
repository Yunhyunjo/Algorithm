#include <iostream>

using namespace std;

int arr[100];
int tmp[100];
void mergesort(int s, int e) {

	if (s >= e) return;
	int mid = (s + e) / 2;
	int p1, p2, p3;
	mergesort(s, mid);
	mergesort(mid + 1, e);
	p1 = s; p2 = mid + 1; p3 = s;
	while (p1 <= mid && p2 <= e) {
		if (arr[p1] < arr[p2]) {
			tmp[p3++] = arr[p1++];
		}
		else tmp[p3++] = arr[p2++];
	}
	while (p1 <= mid) tmp[p3++] = arr[p1++];
	while (p2 <= e) tmp[p3++] = arr[p2++];
	for (int i = s; i <= e; i++) {
		arr[i] = tmp[i];
	}
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	mergesort(0, n-1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}