#include<iostream>
 
using namespace std;

 int firstOccurance(int arr[], int size, int key){

    int s = 0 , e = size - 1;


    int ans = -1;   

    while (s <= e)
    {
            int mid = s + (e - s) / 2;

        if (arr[mid] == key) // right path...
        {
            ans = mid;
            e = mid - 1;
        } else if (key > arr[mid]) // left path...
        {
            s = mid + 1;
        } else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
        
    }
    return ans;
 }
 int lastOccurance(int arr[], int size, int key){

    int s = 0 , e = size - 1;

    int ans = -1;   

    while (s <= e)
    {
            int mid = s + (e - s) / 2;

        if (arr[mid] == key) // right path...
        {
            ans = mid;
            s = mid + 1;
        } else if (key > arr[mid]) // left path...
        {
            s = mid + 1;
        } else if (key < arr[mid])
        {
            e = mid - 1;
        }

       mid = s + (e - s) / 2;
        
    }
    return ans;
 }

int main(){
    int even[11] = {1,2,3,3,3,3,3,3,3,3,5};
    cout << "First Occurance of 3 is at index: " << firstOccurance(even,11,3) <<endl;
    cout << "Last Occurance of 3 is at index: " << lastOccurance(even,11,3) << endl;

    return 0;
}