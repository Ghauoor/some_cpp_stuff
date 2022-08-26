#include<iostream>
using namespace std;


int binarySearch(int arr[],int size, int key){

    int start = arr[0];
    int end = size - 1;

    while (start <= end)
    {
        int min = start + (end - start) / 2;

        if (key < arr[min])
        {
            end = min - 1; 
        } else if (key > arr[min])
        {
            start = min + 1;
        } else
        {
            return min;
        }  
    }
    return -1;
}

int main()
{
   int even[6] = {2,4,6,8,12,18};

    // int odd[5] = {3,8,11,13,15};

    int index = binarySearch(even, 6, 18);
  

    cout << "The index of 12 is: " << index << endl;

    // int oddIndex = binarySearch(odd, 5, 8);

    // cout << "The Index of 8 is: " << oddIndex << endl;

    return 0;

}