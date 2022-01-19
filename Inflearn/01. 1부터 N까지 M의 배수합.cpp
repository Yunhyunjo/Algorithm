#include <iostream>

using namespace std;

int main()
{
    int n, m, sum = 0, i = 1;

    cin >> n >> m;

    while (m*i <= n) {
        sum += m * i++;
    }

    cout << sum;
}

