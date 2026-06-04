#include <iostream>
#include<stdio.h>
#include <algorithm>

using namespace std;


int main()
{
    int t ;
    cin >> t;
    for(int i = 0 ; i < t ; i++)
    {
        int n , k;
        cin >> n >> k;
        int arr[n] ;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int maxLen = 1 , temp = 1;
        for(int i = n - 1 ; i >= 1 ; i--)
        {
            if(arr[i] - arr[i - 1] <= k)
                temp++;
            else 
                temp = 1;
            if(temp > maxLen)
                maxLen = temp;
        }
        cout << n - maxLen << endl;
    }
    return 0;
}
