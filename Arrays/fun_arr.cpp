#include<iostream>

using namespace std;

void printArray(int arr[], int size) {

    cout<< " printing the array " << endl;
    //print the array
    for(int i =0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout<< " printing DONE " << endl;
}

int main(){
    int arr[15] = {2,3};

    printArray (arr,15);
    return 0;
}