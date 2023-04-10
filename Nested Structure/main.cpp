#include<iostream>
using namespace std;

struct address
{
    string cityName;

    int number;
    /* data */
};


struct Students
{
    long int ID;
    string name_surname;
    string department;
    address address;
};



int main() {

    Students Student1 = {20201701066, "Başar Çelebi", "Computer Engineering", {"İzmir", 3}};

    cout<<Student1.name_surname<<endl;
    cout<<Student1.ID<<endl;
    cout<<Student1.department<<endl;
    cout<<Student1.address.cityName<<endl;
    cout<<Student1.address.number<<endl;

    

}