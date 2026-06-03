#include <iostream>
using namespace std;

void inputArr(int arr[] , int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        cin >> arr[i];
    }
}
int main()
{
    int n;
    cin >> n;
    int p , p1[200] ;
    cin >> p;
    inputArr(p1 , p);
    int q ,q1[100];
    cin >> q;
    inputArr(q1 , q);
    for(int i = 0 ; i < q ; i++)
    {
        p1[p] = q1[i];
        p++;
    }
    int i ;
    for(i = 1 ; i <= n ; i++)
    {
        int j;
        for(j = 0 ; j < p ; j++)
        {
            if(p1[j] == i)
                break;
        }
        if(j == p)
        {
            cout << "Oh, my keyboard!" << endl;
            break;
        }
    }
    if(i > n)
        cout << "I become the guy." << endl;
    return 0;
}