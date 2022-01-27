#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k, max = 0, tmp = 0;
    
    cin >> n >> k;
    vector <int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < k; i++) {
        tmp += v[i];
    }
    max = tmp;
    for (int i = k; i < n; i++) {
        tmp -= v[i - k];
        tmp += v[i];
        if (max < tmp) max = tmp;
    }

    cout << max;

    return 0;
}