#include<iostream>
using namespace std;

void subtraction(int number1, int number2){

    cout<<"The subtraction result is: "<< number1-number2<<endl;

}

int main(){

    int number1;
    int number2;

    cout<<"Please enter the numbers: ";
    cin>>number1;
    cin>>number2;

    subtraction(number1, number2);

    return 0;

}