#include<iostream>
using namespace std;
void tobinary(unsigned number){
   if (number > 1)
      tobinary(number/2);
   cout << number % 2;
}
int main(){
   int n = 6;
   cout<<"The number is "<<n<<" and its binary representation is ";
   tobinary(n);
   n = 12;
   cout<<"\nThe number is "<<n<<" and its binary representation is ";
   tobinary(n);
}