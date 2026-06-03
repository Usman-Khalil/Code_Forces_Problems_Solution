#include <iostream>
using namespace std;

int main()
{
    int rooms , output = 0;
    cin >> rooms;
    for (int i = 1 ; i <= rooms ; i++)
    {
        int people , capacity;
        cin >> people >> capacity;
        if(capacity - people >= 2)
            output += 1;
    }
    cout << output;
    return 0;
}