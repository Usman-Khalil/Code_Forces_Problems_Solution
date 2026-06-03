#include <iostream>
using namespace std;

void findMinMaxIdx(int arr[] , int n)
{
    int minIdx = 0;
    int maxIdx = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] <= arr[minIdx])
            minIdx = i;
        if(arr[i] > arr[maxIdx])
            maxIdx = i;
    }
    int count = 0;
    if(minIdx < maxIdx)
        count--;
    while(maxIdx != 0)
    {
        count++;
        maxIdx--;
    }
    while(minIdx != n - 1)
    {
        count++;
        minIdx++;
    }
    cout << count;
}

int main()
{
    int no;
    cin >> no;
    int arrOfSol[no];
    for(int i = 0 ; i < no ; i++)
    {
        cin >> arrOfSol[i];
    }
    findMinMaxIdx(arrOfSol , no);
    return 0;
}