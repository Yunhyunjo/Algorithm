#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, str = "";
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') str += s[i];
    }

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout << str;

    return 0;
}

