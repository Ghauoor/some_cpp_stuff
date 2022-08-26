#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i, amount;
    int arr[9] = {2000, 500, 100, 50, 20, 10, 5, 2, 1};

    
    cout << "Enter the amount: ";
    cin >> amount;

    for (i = 0; i < 9; i++)
    {
        cout << arr[i] << " Note: " << amount / arr[i] << endl;
    }
    return 0;
}