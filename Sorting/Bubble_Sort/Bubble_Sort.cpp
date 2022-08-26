#include <iostream>

using namespace std;

int bubbleSort(int arr[], int n)
{

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

int bubbleS(int arr[], int n)
{
for (int i = 0; i < n; i++)
{
  for (int j = 1; i < n - i; i++)
  {
    if (arr[j] < arr[j - 1])
    {
      swap(arr[j], arr[j - 1]);
    }
    
  }
  
}

}




int printArray(int arr[], int n)
{

  for (int i = 0; i <= n; i++)
  {
    cout << arr[i];
  }
}

int main()
{
int arr[4] = {4,9,2,12};
}