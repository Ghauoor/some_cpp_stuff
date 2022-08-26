#include <iostream>

using namespace std;

int findPivot(int arr[], int n)
{
  int start = 0;

  int end = n - 1;

  int mid = start + (end - start) / 2;

  while (start < end)
  {
    if (arr[mid] >= arr[0])
    {
      start = mid + 1;
    }
    else
    {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }
  return start;
}

int bS(int arr[], int s, int e, int key)
{
  int start = s;
  int end = e;

  int mid = start + (end - start) / 2;

  while (start <= end )
  {
    if (arr[mid] == key)
  {
    return mid;
  }
  if (key >= arr[mid])
  {
    start = mid + 1;
  }
  else
  {
    end = mid - 1;
  }
  mid = start + (end - start) / 2;
  }
  return -1;
  
}

int findTarget(int arr[], int n, int key)
{
  int pivot = findPivot(arr, n);
  if (key >= arr[pivot] && key <= arr[n - 1])
  {
    return bS(arr, pivot, n - 1, key);
  }
  else
  {

    return bS(arr, 0, pivot - 1, key);
  }
}

int main()
{
int arr[6] = {7, 9, 1, 2, 3, 4};
int n = 6;
int key = 3;

cout << "Ans is : " << findTarget(arr, n, key) << endl;
return 0;
}