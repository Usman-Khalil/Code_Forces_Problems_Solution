#include <iostream>
using namespace std;

int main()
{
    int n , capacity = 0;
    cin >> n;
    int exit , enter , inTrain = 0;
    for(int i = 1; i <= n ; i++)
    {
        cin >> exit >> enter;
        inTrain = inTrain - exit + enter;
        if(inTrain > capacity)
            capacity = inTrain;
    }
    cout << capacity;
    return 0;
}