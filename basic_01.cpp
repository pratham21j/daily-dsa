#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    // int n=10;
    for (int i = 0; i < 11; i++)
    {
        sum += i;
        cout << sum << endl;
    }
    cout << sum;
    return 0;
}
/*
0
1
3
6
10
15
21
28
36
45
55
55
*/