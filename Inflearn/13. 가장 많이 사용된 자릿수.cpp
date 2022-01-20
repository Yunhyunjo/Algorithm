#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int arr[10], max = -2147000000, res;

    cin >> s;

    for (char c : s) {
        arr[c - 48]++;
    }

    for (int i = 0; i < 10; i++) {
        if (max <= arr[i]) {
            max = arr[i];
            res = i;
        }
    }
    cout << res;

    return 0;
}

