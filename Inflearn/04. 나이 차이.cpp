#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, arr[100];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    stable_sort(arr, arr + n);
    cout << arr[n-1] - arr[0];

    return 0;
}

/*
int main()
{
    int n, a, mini = 2147000000, maxi = -2147000000;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if(mini > a) min = a;
        if(maxi < a) max = a;
    }
    cout << max - min;

    return 0;
}
*/

