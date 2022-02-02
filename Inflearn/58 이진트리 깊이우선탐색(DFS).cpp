#include <iostream>

using namespace std;

void dfs(int n) {

	if (n > 7) return;

	cout << n << " ";  // 전위순회 출력
	dfs(n*2);
	//cout << n << " ";  // 중위순회 출력
	dfs(n * 2 + 1);
	//cout << n << " ";  // 후위순회 출력
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	dfs(1);

	return 0;
}



