#include <iostream>
using namespace std;

void getNoOfUpperLowerChar(char ch , int* anton , int* danik)
{
    if(ch == 'A')
        *anton += 1;
    else
        *danik += 1;
}

int main()
{
    int n ;
    cin >> n;
    int anton = 0 , danik = 0;
    for(int i = 0 ; i < n ; i++)
    {
        char ch;
        cin >> ch;
        getNoOfUpperLowerChar(ch , &anton , &danik);
    }
    if(anton > danik)
        cout << "Anton";
    else if(danik > anton)
        cout << "Danik";
    else 
        cout << "Friendship";
    return 0;
}