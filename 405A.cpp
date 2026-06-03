#include <iostream>
using namespace std;

int getMinIdx(int arr[], int size);
void selectionSorting(int arr[], int size);
void swapOfNumbers(int* n1, int* n2);

int main()
{
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    selectionSorting(arr , n);
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
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

void selectionSorting(int arr[], int size)
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