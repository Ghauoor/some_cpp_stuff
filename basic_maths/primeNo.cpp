#include<iostream>

using namespace std;

bool isEven(int n){
    for (int i = 2; i < n; i++)
    {
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;

    cout << "Enter the number: "<< endl;
    cin >> n;

    if (isEven(n)){
            cout <<" is a prime number"<<endl;
    } else {
        cout << " is not a prime number..";
    }
       
   return 0;


}