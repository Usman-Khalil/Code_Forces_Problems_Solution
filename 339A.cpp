#include <iostream>
using namespace std;

int getMinIdx(char arr[], int size);
void selectionSorting(char arr[], int size);
void printArray(char arr[],int size);
int lengthStr(char arr[]);

int main()
{
    char arr[101] ;
    cin >> arr;
    selectionSorting(arr , lengthStr(arr) );
    printArray(&arr[lengthStr(arr) / 2], (lengthStr(arr) / 2) + 1);
    return 0;
}

int lengthStr(char arr[])
{
    int i = 0;
    while(arr[i] != '\0')
        i++;
    return i;
}

int getMinIdx(char arr[], int size)
{
    //cout << size;
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

void selectionSorting(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIdx = getMinIdx(arr + i, size - i);
        swap(arr[i], (arr + i)[minIdx]);
    }
}

void printArray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if(i < size - 1)
            cout << "+";
    }
}