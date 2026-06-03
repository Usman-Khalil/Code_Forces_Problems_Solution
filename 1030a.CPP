#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int flag = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        int num;
        cin >> num;
        if(num == 1)
            flag = 0;
    }
    if(flag)
        cout << "EASY";
    else
        cout << "HARD";
    return 0;
}