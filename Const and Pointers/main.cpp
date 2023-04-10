#include<iostream>
using namespace std;

void printArray(const int *ptr1, const int *ptr2){

    for(;*ptr1 != *ptr2; ptr1++){

        cout<<"Element: "<< *ptr1<<endl;
    }
}

int main() {

    int a[] = {10, 20, 30, 40 ,50, 60, 70, 80, 90, 100};

    printArray(a+3, a+8);

    return 0;
}