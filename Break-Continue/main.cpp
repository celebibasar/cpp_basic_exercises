#include<iostream>
using namespace std;

int main() {

    string sys_username = "celebibasar";
    string username;
    string sys_password = "12345";
    string password;

    while(true){

        cout<<"Enter the username: ";
        cin>>username;
        cout<<"Enter the password: ";
        cin>>password;

        if(sys_username == username && sys_password == password){

            cout<<"Welcome!"<<endl;
            break;
        }
        else if (sys_username != username && sys_password == password) {
            cout<<"Wrong username!"<<endl;
            continue;
        }
        else if (sys_username == username && sys_password != password) {
            cout<<"Wrong password!"<<endl;
            continue;
        }
        else {
            cout<<"Wrong username and password!"<<endl;
            continue;
        }


    }

    return 0;
}