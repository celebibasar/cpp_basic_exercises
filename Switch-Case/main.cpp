#include<iostream>
using namespace std;

int main() {

    int choice;

    cout<<"Please write your choice: ";
    cin>>choice;

    switch(choice){

        case 1:
        cout<<"Your choice is 1..."<<endl;
        break;
        case 2:
        cout<<"Your choice is 2..."<<endl;
        break;
        case 3:
        cout<<"Your choice is 3..."<<endl;
        break;
        case 4:
        cout<<"Your choice is 4..."<<endl;
        break;
        default:
        cout<<"Invalid Number!!"<<endl;
        break;
    }
    return 0;
}