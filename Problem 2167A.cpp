#include <iostream>
using namespace std;

int main()
{
    int num , count , idx , test;
    int testCase[10000];
    cin >> num ;
    count  = 0 ;
    while (count < num)
    {
        int n1 , n2 , n3 , n4 ;
        cin >> n1 >> n2 >> n3 >> n4 ;
        testCase[count] = ((n1 == n2) && (n1 == n3) && (n1 == n3) && (n1 == n4));
        count++;
    }
    idx = 0 ;
    while (idx < num)
    {
        test = testCase[idx];
        if (test == 1)
            cout << "YES" << endl ;
        else
            cout << "NO" << endl ;
        idx++;
    }
    return 0;
}