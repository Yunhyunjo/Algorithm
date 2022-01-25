#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,m,cnt = 0, num, max = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num > m) cnt++;
        else {
            if (cnt > max) {
                max = cnt;
            }
            cnt = 0;
        }
    }

    if (cnt > max) cout << cnt;
    else cout << max;

    return 0;
}