#include <iostream>

using namespace std;

int power(int a, int b)
{

    int ans = 1;

    for (int i = 0; i <= b; i++)
    {

        ans = ans * a;
    }
    return ans;
}

int main()
{
    int a, b;
    cout << "Enter the base Number: " << endl;
    cin >> a;

    cout << "Enter the exponent Number: " << endl;
    cin >> b;
    int answer = power(a,b);

    cout << answer;
}