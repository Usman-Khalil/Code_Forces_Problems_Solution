#include <iostream>
using namespace std;

int main()
{
    long long int num , noOfSub;
    cin >> num >> noOfSub;
    for(int i = 0 ; i < noOfSub ; i++)
    {
        if(num % 10 == 0)
            num = num / 10;
        else
            num--;
    }
    cout << num;
    return 0;
}