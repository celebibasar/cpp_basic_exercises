#include <iostream>
using namespace std;

int main() {

    string real_username = "celebibasar";
    string real_password = "12345";
    string username, password;

    cout<<"Enter your username: ";
    cin>>username;
    cout<<"Enter your password: ";
    cin>>password;

    if(username == real_username && password == real_password) {
        cout<<"Welcome to the party!"<<endl;
    }
    else if(username != real_username && password == real_password){
        cout<<"Wrong Username!"<<endl;
    }
    else if (username == real_username && password != real_password) {
        cout<<"Wrong Password!"<<endl;

    }
    else {
        cout<<"Both username and password are wrong!"<<endl;
    }
}