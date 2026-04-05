#include <iostream>
using namespace std;

class Student {
    int id;
    int size;
    float* grades;  // Dynamically allocated array

public:
    // Constructor
    Student(int i, int s) : id(i), size(s) {
        grades = new float[size];
    }

    // Shallow Copy Constructor (Default Behavior)
    Student(const Student& other) {
        id = other.id;
        size = other.size;
        grades = other.grades;
    }

    // Deep Copy Constructor
    Student(Student& other, bool deepCopy) {
        id = other.id;
        size = other.size;
        grades = new float[size];
        for (int i = 0; i < size; i++) {
            grades[i] = other.grades[i];
        }
    }

    // Copy Assignment Operator (Deep Copy)
    Student& operator=(const Student& other) {
        if (this != &other) {  // Prevent self-assignment
            delete[] grades;   // Free existing memory

            id = other.id;
            size = other.size;
            grades = new float[size];
            for (int i = 0; i < size; i++) {
                grades[i] = other.grades[i];
            }
        }
        return *this;
    }

    // Function to input grades
    void inputgrades() {
        cout << "Enter grades: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> grades[i];
        }
    }

    // Display function
    void display() 
    {
        cout << "Student ID: " << id << endl;
        cout << "Grades: ";
        for (int i = 0; i < size; i++) 
        {
            cout << grades[i] << " ";
        }
        cout << endl;
    }

    // Function to modify a grade
    void modifygrade(int i, float grade) 
    {
        if (i >= 0 && i < size) 
        {
            grades[i] = grade;
        }
    }
};

int main() 
{
    int s;
    cout << "Enter size of array: ";
    cin >> s;

    Student student1(1, s);
    student1.inputgrades();

    // Applying Shallow Copy
    Student student2 = student1;  // Shallow Copy

    // Applying Deep Copy
    Student student3(student1, true);  // Deep Copy

    cout << "Before Modification: " << endl;
    cout << "Student 1 Info: " << endl;
    student1.display();
    cout << "Student 2 (Shallow Copy) Info: " << endl;
    student2.display();
    cout << "Student 3 (Deep Copy) Info: " << endl;
    student3.display();
    cout << endl;

    // Modifying student1's grades
    student1.modifygrade(0, 97.2);

    cout << "After Modification of student1 object only: " << endl;
    cout << "Student 1 Info: " << endl;
    student1.display();
    cout << "Student 2 (Shallow Copy) Info: " << endl;
    student2.display();  // Should be affected
    cout << "Student 3 (Deep Copy) Info: " << endl;
    student3.display();  // Should remain unchanged

    return 0;
}
