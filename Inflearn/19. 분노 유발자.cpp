#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, arr[100], max, cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    max = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (max < arr[i]) {
            max = arr[i];
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}