#include <iostream>

using namespace std;

int peakInMountainArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while (start < end )
    {
        if(arr[mid] > arr[mid + 1])
        {
            end = mid;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main(){
    int arr[5] = {1,2,3,2,1};

    cout<<"Peak element is at : "<<peakInMountainArray(arr,5);
}