#include <iostream>
using namespace std;

void capitalize(char arr[], int upper , int lower)
{
    for(int i = 0 ; arr[i] != '\0' ; i++)
    {
        if(upper <= lower)
        {
            if((arr[i] >= 'A' && arr[i] <= 'Z'))
                arr[i] = arr[i] + 32;
        }
        else
            if(!(arr[i] >= 'A' && arr[i] <= 'Z'))
                arr[i] = arr[i] - 32;

    }
}

void getNoOfUpperLowerChar(char arr[] , int* upper , int* lower)
{
    for(int i = 0 ; arr[i] != '\0' ; i++)
    {
        if((arr[i] >= 'A' && arr[i] <= 'Z'))
            *upper += 1;
        else
            *lower += 1;
    }
}

int main()
{
    char arr[10001];
    cin >> arr;
    int upper = 0 , lower = 0;
    getNoOfUpperLowerChar(arr , &upper , &lower);
    capitalize(arr , upper , lower);
    cout << arr;
    return 0;
}