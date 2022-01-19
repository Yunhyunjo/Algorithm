#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector <int> v(n + 1, 1);

    for (int i = 2; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            v[j]++;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}

