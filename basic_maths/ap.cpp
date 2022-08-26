#include<iostream>

using namespace std;

int ap(int n){
    int ans= (3 * n) + 7;

    return ans;
}

int main(){
    int n;
    cout << " Enter the Number: "<<endl;
    cin >> n;
    cout << ap(n) << " is Arthimatic Progression of givin number...";
}