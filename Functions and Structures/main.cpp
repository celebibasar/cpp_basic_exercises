#include<iostream>
using namespace std;

struct Students
{
    long int ID;
    string name_surname;
    string department;
};

void showStudents(Students student){

    cout<<student.name_surname<<endl;
    cout<<student.ID<<endl;
}

void show(Students* student){

    student->name_surname = "Başar Hanks";

    cout<< student->name_surname<<endl;

}


int main() {

    Students Student1 = {20201701066, "Başar Çelebi", "Computer Engineering"};

    cout<<Student1.name_surname<<endl;
    cout<<Student1.ID<<endl;

    showStudents(Student1);

    show(&Student1);

    cout<<Student1.name_surname<<endl;



}