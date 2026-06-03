#include <iostream>
using namespace std;

int main()
{
    int limak , bob;
    cin >> limak >> bob;
    int yearCount = 0;
    do
    {
        limak = limak * 3;
        bob = bob * 2;
        yearCount++;
    } while(limak <= bob);
    cout << yearCount;
    return 0;
}