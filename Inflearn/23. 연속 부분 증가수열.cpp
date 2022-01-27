#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, num, max = 0, p = -2147000000, cnt = 0;
    
    cin >> n;
    while (n--)
    {
        cin >> num;
        if (p <= num) cnt++;
        else {
            if (max < cnt) max = cnt;
            cnt = 1;
        }
        p = num;
    }

    if (max == 0) max =  cnt;
    cout << max;

    return 0;
}