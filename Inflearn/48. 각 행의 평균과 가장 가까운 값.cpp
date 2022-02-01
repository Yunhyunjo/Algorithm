#include <iostream>
#include <algorithm>

using namespace std;

int arr[9][9];
int arr2[9][2];

/*
소수점 반올림 하는 법 : round함수 말고도 0.5를 더하고 int로 바꿔 저장하면 됨
정수 / 정수 = 정수
실수 / 정수 = 실수
*/

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			arr2[i][0] += arr[i][j];
		}
		arr2[i][0] = arr2[i][0] / 9.0 + 0.5;
	}
	
	for (int i = 0; i < 9; i++) {
		int num = 2147000000;
		for (int j = 0; j < 9; j++) {
			if (abs(arr2[i][0] - arr[i][j]) < num) {
				num = abs(arr2[i][0] - arr[i][j]);
				arr2[i][1] = arr[i][j];
			}
			else if (abs(arr2[i][0] - arr[i][j]) == num) arr2[i][1] = max(arr[i][j], arr2[i][1]);
		}
	}

	for (int i = 0; i < 9; i++) {
		cout << arr2[i][0] << " " << arr2[i][1] << "\n";
	}
	
	return 0;
}