#include <iostream>

using namespace std;

int digit_sum(int x) {
    int sum = 0;
    while (x)
    {
        sum += (x % 10);
        x /= 10;
    }
    return sum;
}

int main()
{
    int n, hap = -2147000000, num, res;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        int a = digit_sum(num);
        if (hap < a) {
            hap = a;
            res = num;
        }
        else if (hap == a) {
            if (res < num) res = num;
        }
    }
    cout << res;
    return 0;
}

