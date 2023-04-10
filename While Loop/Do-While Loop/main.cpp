#include<iostream>
using namespace std;

int main() {

    string password = "010702";
    string input;

    do {

        cout<<"Enter your password: ";
        cin>>input;

        if(input != password){
            cout<<"Wrong Password"<<endl;
        }

    } while (password != input);

    cout<<"Correct password!"<<endl;

    return 0;
}