#include <iostream>
using namespace std;

int main() {

    int *ptr = nullptr;

    ptr = new int;

    *ptr = 100;

    cout<< *ptr<<endl;
    delete ptr; //Bu kod satırından sonra ptr bir "Dangling Referans" oldu.

    *ptr = 10;

    cout << *ptr<<endl;

    
}