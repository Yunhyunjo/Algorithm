#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, a[2][100];

    cin >> n;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (a[0][i] == a[1][i]) cout << "D" << "\n";
        else if (a[0][i] == 1) {
            if (a[1][i] == 2) cout << "B" << "\n";
            else cout << "A" << "\n";
        }
        else if (a[0][i] == 2) {
            if (a[1][i] == 1) cout << "A" << "\n";
            else cout << "B" << "\n";
        }
        else {
            if (a[1][i] == 1) cout << "B" << "\n";
            else cout << "A" << "\n";
        }

    }

    return 0;
}