#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    int a = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') a++;
        else {
            if (a == 0) {
                cout << "NO";
                return 0;
            }
            else a--;
        }
    }
    if (a == 0) cout << "YES";
    else cout << "NO";

    return 0;
}

