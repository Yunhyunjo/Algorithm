#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a[10], b[10], aa = 0, bb = 0;
    char res =  'D';

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++) {
        cin >> b[i];
    }
    
    for (int i = 0; i < 10; i++) {
        if (a[i] == b[i]) {
            aa++;
            bb++;
        }
        else if (a[i] > b[i]) {
            aa += 3;
            res = 'A';
        }
        else {
            bb += 3;
            res = 'B';
        }
    }

    if (aa != bb) {
        res = (aa > bb) ? 'A' : 'B';
    }

    cout << aa << " " << bb << "\n" << res;

    return 0;
}