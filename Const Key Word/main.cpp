#include<iostream>
using namespace std;

int main() {

    const int x = 100;

    // x = 1000;

    const int a[] = {100, 200, 300, 400, 500};

    a[2] = 3000;

    cout<<x<<endl;
    cout<<a[2]<<endl;

    return 0;
}