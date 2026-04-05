// Create two member functions inside a class (public, private).
#include <iostream>
using namespace std;
class student
{
    public:
    string name;
    int rollno;
    int age;

    private:
    void input()
    {
        cout << "Enter student name: "; cin >> name;
        cout << "Enter student rollno: "; cin >> rollno;
        cout << "Enter student age: "; cin >> age;
    }

    public:
    void display()
    {
        cout << "Student data: " << endl;
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollno << endl;
        cout << "Age: " << age << endl;
    }

    public:
    student()
    {
        input();
    }
};
int main()
{
    student s1;
    s1.display();
    return 0;
}
