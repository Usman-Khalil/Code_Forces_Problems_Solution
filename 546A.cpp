#include <iostream>
using namespace std;

int main()
{
    long long int price , amount , borrow = 0 , noOfBanana;
    cin >> price >> amount >> noOfBanana;
    for(int i =1 ; i <= noOfBanana ; i++)
    {
        borrow = borrow + (i * price);
    }
    if(borrow - amount <= 0)
        cout << 0;
    else
        cout << borrow - amount;
    return 0;
}