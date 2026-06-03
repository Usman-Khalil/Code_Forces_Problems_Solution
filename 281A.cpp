#include <iostream>
using namespace std;

void capitalize(char * zeroIndex)
{
    if(*zeroIndex >= 'A' && *zeroIndex <= 'Z')
        return ;
    else
        *zeroIndex = *zeroIndex - 32;
}

int main()
{
    char arr[10001];
    cin >> arr;
    capitalize(&arr[0]);
    cout << arr;
    return 0;
}