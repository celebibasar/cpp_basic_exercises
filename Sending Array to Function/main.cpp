#include<iostream>
using namespace std;

void printArray(int x[], int size){

    for(int i = 0; i<size; i++){
        
        cout<<x[i]<<endl;
    }
}

int main() {

    int x[] = {1, 2, 3, 4, 5};

    printArray(x, 5);

    return 0;
}