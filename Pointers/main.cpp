#include<iostream>
using namespace std;

int main() {
    int x = 9;

    int *pointer = &x;

    cout<<"Value of x: "<< pointer<<endl;
    cout<<"Value of x: "<< &x<<endl;

    cout<<"Value of x: "<< *pointer<<endl;
}