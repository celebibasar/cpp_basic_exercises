#include <iostream>
using namespace std;

int main () {

    string input;
    int a,b;

    cout<<"1. Addition Operation"<<endl;
    cout<<"2. Subtraction Operation"<<endl;
    cout<<"3. Division Operation"<<endl;
    cout<<"4. Multiply Operation"<<endl;

    cout<<"Choose one of the operations: ";
    cin >> input;

    if(input == "1"){
        cout<<"a: ";
        cin>>a;
        cout<<"b: ";
        cin>>b;
        cout<<"Result: "<<a+b<<endl;

    
    }
    else if (input == "2") {
        cout<<"a: ";
        cin>>a;
        cout<<"b: ";
        cin>>b;
        cout<<"Result: "<<a-b<<endl;
    }
    else if (input == "3") {
        cout<<"a: ";
        cin>>a;
        cout<<"b: ";
        cin>>b;
        cout<<"Result: "<<a/b<<endl;
    }
    else if (input == "4") {
        cout<<"a: ";
        cin>>a;
        cout<<"b: ";
        cin>>b;
        cout<<"Result: "<<a*b<<endl;

    }
    else {
        cout<<"Wrong Number!";
    }

    return 0;
}