#include<iostream>

using namespace std;

int isEven(int n){
   if(n & 1){
    return 0;
   }
   return 1;
}

int main(){
    int n;

    cout << " Enter any number: "<< endl;
    cin >> n;

    if (isEven(n))
    {
        cout << " Number is Even...";
    } else {
        cout << " Number is Odd";
    }
    return 0;
}