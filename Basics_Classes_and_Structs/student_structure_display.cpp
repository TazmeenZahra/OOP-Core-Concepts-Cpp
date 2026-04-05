#include <iostream>
using namespace std;
struct Student {
    string name;
    int rollno;
    string Uni_name;
    int year;
    int semester;
};

void display(Student s[2])
{
    for (int i = 0; i < 2; i ++)
    {
        cout << "Student " << i + 1 << " data: " << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Roll no: " << s[i].rollno << endl;
        cout << "University Name: " << s[i].Uni_name << endl;
        cout << "Study Year: " << s[i].year << endl;
        cout << "Semester: " << s[i].semester << endl;
        cout << endl;
    }
}

int main()
{
    Student s[2];
    for (int i = 0; i < 2; i ++)
    {
        cout << "Enter student " << i + 1 << " data: " << endl;
        cout << "Enter student name: "; cin >> s[i].name;
        cout << "Enter student Roll no: "; cin >> s[i].rollno;
        cout << "Enter University Name: "; cin >> s[i].Uni_name;
        cout << "Enter Study Year: "; cin >> s[i].year;
        cout << "Enter Semester no: "; cin >> s[i].semester;
        cout << endl;
    }
    display(s);
    return 0;
}
