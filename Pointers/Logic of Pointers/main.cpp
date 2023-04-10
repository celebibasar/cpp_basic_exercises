#include<iostream>
using namespace std;

/*void change(int y) {
    y = 20;

}

int main() {

    int x = 5;
    cout<<"Value of x: "<<x<<endl;
    change(x);
    cout<<"Value of x: "<<x<<endl;

}*/

void change(int *y) {
    *y = 20;

}

int main() {

    int x = 5;
    cout<<"Value of x: "<<x<<endl;
    change(&x);
    cout<<"Value of x: "<<x<<endl;

}