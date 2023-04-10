#include<iostream>
using namespace std;

struct Students
{
    long int ID;
    string name_surname;
    string department;
};


int main() {

    Students Student1 = {20201701066, "Başar Çelebi", "Computer Engineering"};

    cout<<Student1.name_surname<<endl;
    cout<<Student1.ID<<endl;

    Students* ptr = &Student1;

    cout<< ptr->name_surname;

}