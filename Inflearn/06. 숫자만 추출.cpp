#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int num = 0, n = 0;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 48 && s[i] <= 58) num = num * 10 + s[i] - 48;
    }

    for (int i = 1; i * i < num; i++) {
        if (num % i == 0) n++;
    }

    cout << num << "\n" << n * 2;

    return 0;
}

