
#include <iostream>
using namespace std;
int main()
{
    int min = 20;
    int max = 40;
    int sum = 0;

    for (int i = min; i < max; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout << "Sum of numbers: ";
    cout << sum;
    return 0;
}

// Sum of numbers: 290