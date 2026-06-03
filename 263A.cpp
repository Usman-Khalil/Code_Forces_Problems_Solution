#include <iostream>
using namespace std;

void getPostion(int arr[][5] , int &row , int &col)
{
    for(row = 0 ; row < 5 ; row++)
    {
        for(col = 0 ; col < 5 ; col++)
        {
            if(arr[row][col] == 1)
                return;
        }
    }
    return;
}

int main()
{
    int arr[5][5];
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row , col;
    getPostion(arr , row , col);
    int count = 0;
    do
    {
        if(row == 2 && col == 2)
            break;
        if(row == 2)
        {
            if(col < 2)
                col += 1;
            else
                col -= 1;
        }
        else if (col == 2)
        {
            if(row < 2)
                row += 1;
            else
                row -= 1;
        }
        else
            if(row < 2)
                row += 1;
            else
                row -= 1;
        count++;
    } while(true);
    cout << count;
    return 0;
}