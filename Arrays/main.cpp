#include<iostream>
using namespace std;

int main() {
    int array[3];

    /*array[0] = 2;
    array[1] = 5;
    array[2] = 8;

    for(int i = 0; i<3; i++){
        cout<< i <<". index: "<< array[i]<<endl;
    }*/

    string array2[4];
    cout<<"Please enter the names: "<<endl;

    for(int i=0; i<4; i++){
        cin>>array2[i];
    }
    for (int i = 0; i<4; i++){
        cout<<i<<". index: "<<array2[i]<<endl;
    }
    return 0;
}