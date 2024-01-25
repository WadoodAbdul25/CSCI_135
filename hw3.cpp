//Wadood Abdul, Program detail: Check if the number is positive, negative or Zero

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num>0){
        cout << "\nThe number is Positive.";
    } else if(num == 0){
        cout << "\nThe number is zero.";
    } else{
        cout << "\nThe number is Negative.";
    }
    return 0;
}