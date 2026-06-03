#include <iostream>
using namespace std;

int main()
{
    int money ;
    cin >> money;
    int bills = 0 , remainingMoney;
    remainingMoney = money;
    if(remainingMoney >= 100)
    {
        bills = bills + remainingMoney / 100;
        remainingMoney %= 100;
    }
    if(remainingMoney >= 20)
    {
        bills = bills + remainingMoney / 20;
        remainingMoney %= 20;
    }
    if(remainingMoney >= 10)
    {
        bills = bills + remainingMoney / 10;
        remainingMoney %= 10;
    }
    if(remainingMoney >= 5)
    {
        bills = bills + remainingMoney / 5;
        remainingMoney %= 5;
    }
    if(remainingMoney >= 1)
    {
        bills = bills + remainingMoney / 1;
        remainingMoney %= 1;
    }
    cout << bills;
    return 0;
}