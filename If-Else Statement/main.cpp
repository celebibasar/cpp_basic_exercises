#include <iostream>
using namespace std;

int main() {

    string input;
    string password = "12345";

    cout<<"Please enter your password: ";
    cin >> input;

    if(input == password) {

        cout<<"Congratulations! Correct Password!"<<endl;
    }
    else {

        cout<<"Wrong password!"<<endl;
    }

    return 0;


}