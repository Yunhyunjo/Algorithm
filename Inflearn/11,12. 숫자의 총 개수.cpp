#include <iostream>

using namespace std;

int main()
{
    int n, cnt = 0, i = 1, j = 1, c = 9;

    cin >> n;

    while (true)
    {
        if (n < c) {
            cnt = cnt + (n - i + 1) * j;
            cout << cnt;
            break;
        }
        else {
            cnt = cnt + (c - i + 1) * j;
            i *= 10;
            c = c * 10 + 9;
            j++;
        }
    }
    return 0;
}

/*
int main()
{
    int n, sum = 0, c = 1, d = 9, res = 0;

    cin >> n;

    while (sum + d < n)
    {
        res = res + (c * d);
        sum += d;
        c++;
        d *= 10;
    }
    res = res + ((n - sum) * c);
    cout << res;
    return 0;
}
*/

