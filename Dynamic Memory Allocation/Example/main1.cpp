#include <iostream>
using namespace std;

int main() {
    int size;

    cout<<"Please enter the number of values: ";
    cin>> size;
    int *ptr = new int[size];

    for(int i = 0; i < size; i++){

        cout<<"Please enter the value: ";
        cin>> ptr[i];
    }
    cout<<endl;
    for(int i = 0; i < size; i++){

        cout<<"Value: "<< ptr[i]<<endl;
    }

    delete [] ptr;
    ptr = nullptr;

    cout<< ptr[0];

}