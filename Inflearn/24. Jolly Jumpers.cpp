#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, p, now;
    
    cin >> n;
    vector <int> v(n);
    vector <int> vv(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 1; i < n; i++) {
        int a = abs(v[i] - v[i - 1]);
        if (a >= n) {
            cout << "NO";
            return 0;
        }
        vv[a]++;
    }

    for (int i = 1; i < n; i++) {
        if (vv[i] == 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}