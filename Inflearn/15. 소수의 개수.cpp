#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, cnt = 0;

    cin >> n;

    vector <int> v(n+1, 1);

    for (int i = 2; i * 2 <= n; i++) {
        for (int j = i + i; j <= n; j += i) {
            v[j] = 0;
        }
    }

    for (int i = 2; i <= n; i++) {
        cnt += v[i];
    }

    cout << cnt;
}