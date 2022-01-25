#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, num, hap;

    cin >> n;

    while (n--)
    {
        cin >> num;
        cin >> hap;

        if (hap != (num * (num + 1)) / 2) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }

    return 0;
}