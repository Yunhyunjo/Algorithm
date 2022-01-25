#include <iostream>
#include <string>

using namespace std;

int a[58];
int b[58];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string aa, bb;

    cin >> aa;
    cin >> bb;

    if (aa.size() != bb.size()) {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < aa.size(); i++) {
        a[aa[i] - 65]++;
        b[bb[i] - 65]++;
    }

    for (int i = 0; i < 58; i++) {
        if (a[i] != b[i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}