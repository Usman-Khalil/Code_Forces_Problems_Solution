#include <iostream>
using namespace std;

int getMinIdx(int arr[], int size);
void selctionSorting(int arr[], int size);
void swapOfNumbers(int*, int*);

int main()
{
    int n;
    cin >> n;
    int arr[n] , sumOfCoins = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        sumOfCoins = sumOfCoins + arr[i];
    }
    selctionSorting(arr , n);
    int equalShare = sumOfCoins / 2 , minCoins = 1 , maxShare = arr[n - 1] , i = 2;
    while(maxShare <= equalShare)
    {
        maxShare = maxShare + arr[n - i];
        i++;
        minCoins++;
    }
    cout << minCoins;
    return 0;
}

int getMinIdx(int arr[], int size)
{
    int minIdx = 0;
    for (int i = 0; i < size ; i++)
    {
        if (arr[i] <= arr[minIdx])
        {
            minIdx = i;
        }
    }
    return minIdx;
}

void selctionSorting(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIdx = getMinIdx(arr + i, size - i);
        swapOfNumbers(&arr[i], &((arr + i)[minIdx]));
    }
}

void swapOfNumbers(int* n1, int* n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}