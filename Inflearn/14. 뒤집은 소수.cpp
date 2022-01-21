#include <iostream>
#include <vector>

using namespace std;

int reverse(int x) {

    int res = 0;

    while (x > 0) {
        res = res * 10 + (x % 10);
        x /= 10;
    }

    return res;
}

bool isPrime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main()
{
    int n, a;

    cin >> n;

    vector <int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> a;
        int num = reverse(a);
        if (num == 1) continue;
        if (isPrime(num)) {
            cout << num << " ";
        }
    }

    return 0;
}

