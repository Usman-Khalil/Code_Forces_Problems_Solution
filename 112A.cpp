#include <iostream>
#include <algorithm>

using namespace std;

string lowercase(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;

    str1 = lowercase(str1);
    str2 = lowercase(str2);

    if (str1 == str2)
        cout << 0;
    else if (str1 < str2)
        cout << -1;
    else
        cout << 1;

    return 0;
}