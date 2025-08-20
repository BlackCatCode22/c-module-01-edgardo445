// addTwoints.cpp
    // dH 8/18/25

    //References
#include <iostream>
using namespace std;






int main() {
    cout << "Hello and welcome to MY largest of three ints program. \n";

    // Declare all variables needed.
    int num1;
    int num2;
    int num3;
    int sumofTheints;

    // Initialize all my variables.
    // assign a zero value to my variables.



    // Get three ints from the user

    // Get num1
    cout << "\n Please enter a value for num1: ";
    cin >> num1;
    cout << "\n Your entered " << num1 <<" for num1";

    // Get num2
    cout << "\n Please enter a value for num2: ";
    cin >> num2;
    cout << "\n Your entered " << num2 <<" for num2";

    // Get num3
    cout << "\n Please enter a value for num3: ";
    cin >> num3;
    cout << "\n Your entered " << num3 <<" for num3";

    // Compare num1 and num2
    if (num1 > num2) {
        if (num1 > num3) {
            cout << "\n The largest number is " << num1;
        }else {
            cout << "\n The largest number is " << num3;
        }
    }else if(num2 > num3){
        cout << "\n The largest number is " << num2;
    }else {
        cout << "\n The largest number is " << num3;
    }





    return 0;
}





