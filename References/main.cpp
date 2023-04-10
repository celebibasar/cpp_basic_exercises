#include<iostream>
using namespace std;

//For pointers,  we are giving value of address to pointers, but for references, we are giving value of number to references.

//We are using references for our simple operations.


void change(int &y) {
    y = 20;

}

int main() {

    int x = 5;
    cout<<"Value of x: "<<x<<endl;
    change(x);
    cout<<"Value of x: "<<x<<endl;

}