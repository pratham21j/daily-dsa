
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int sum = 0;
    int n;
    cout << "Enter the no ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
/*
Enter the no 21
110
*/