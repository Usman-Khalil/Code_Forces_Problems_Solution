#include <iostream>
using namespace std;

void inputArr(int arr[] , int size)
{
    for(int i = 0; i < size ; i++)
    {
        cin >> arr[i];
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    inputArr(arr , n);
    int maxLen = 1 , temp = 1;
    for(int i = 0 ; i < n - 1; i++)
    {
        if(arr[i + 1] >= arr[i])
            temp++;
        else 
            temp = 1;
        if(temp > maxLen)
            maxLen = temp;
    }
    cout << maxLen;
    return 0;
}