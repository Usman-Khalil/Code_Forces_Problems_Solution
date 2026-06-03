#include <iostream>
using namespace std;

int main()
{
    long long int num  ;
    cin >> num;
    while(num > 0)
    {
        if(num % 10 != 7 && num % 10 != 4)
        {
            cout << "NO";
            exit(0);
        }
        num /= 10;
    }
    cout << "YES";
    return 0;
}