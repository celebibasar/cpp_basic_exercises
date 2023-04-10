#include<iostream>
using namespace std;

int add(int a, int b, int c){

    return a + b + c;
}

int main() {

    int b = add(3, 7, 8);

    cout<<"The result: "<< b<<endl;
}