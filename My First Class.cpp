#include <iostream>
using namespace std;
class Student
{
public:
    string Name, Gender, Department, Email;
    int Age, ID;
    double CGPA;
    void Introduction()
    {
        cin >> Name >> Age >> Gender >> Email >> Department >> ID >> CGPA;
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Gender :" << Gender << endl;
        cout << "Email address: " << Email << endl;
        cout << "Department: " << Department << endl;
        cout << "ID no.: " << ID << endl;
        cout << "CGPA: " << CGPA << endl;
    }
};
int main()
{
    Student student1;
    student1.Name;
    student1.Age;
    student1.Gender;
    student1.Email;
    student1.Department;
    student1.ID;
    student1.CGPA;
    student1.Introduction();
    // cin >> student1.Name >> student1.Age >> student1.Gender >> student1.Email >> student1.Department >> student1.ID >> student1.CGPA;
    /*cout << "Name: " << student1.Name << endl
         << "Age: " << student1.Age << endl
         << "Gender: " << student1.Gender << endl
         << "Email: " << student1.Email << endl
         << "Department: " << student1.Department << endl
         << "ID: " << student1.ID << endl
         << "CGPA: " << student1.CGPA << endl;*/

    return 0;
}
