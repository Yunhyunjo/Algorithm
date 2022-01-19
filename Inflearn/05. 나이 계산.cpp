#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    int age = 2019;
    char c;
    
    cin >> s;

    int n = stoi(s.substr(0, 2));

    if (s[7] == '1') {
        age = age - 1900 - n + 1;
        c = 'M';
    }
    else if (s[7] == '3') {
        age = age - 2000 - n + 1;
        c = 'M';
    }
    else if (s[7] == '2') {
        age = age - 1900 - n + 1;
        c = 'W';
    }
    else {
        age = age - 2000 - n + 1;
        c = 'W';
    }

    cout << age << " " << c;

    return 0;
}

