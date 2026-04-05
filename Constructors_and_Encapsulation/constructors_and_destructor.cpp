#include <iostream>
using namespace std;
class myclass
{
    private:
    int datamember;
    public:
    myclass()                 //default constructor 
    {
        cout << "Hello you have called the constructor." << endl;
    }
    myclass(int a, int b)     // parameterized constructor
    {
        cout << "Sum of a and b is: " << a + b << endl;
    }
    myclass(int a, double b)     // parameterized constructor -------> constructor overloading
    {
        cout << "Sum of a and b is: " << a + b << endl;
    }
    ~myclass()     // destructor ------> defaulted
    {
        cout << "Hello you have called the destructor." << endl;
    }
};
int main()
{
    myclass obj2(3,5);     //the value that is sent here, that data typed constructor will be called. Compiler won't change int into double by its own.
    myclass obj0(4,5.7);
    myclass obj;
    return 0;
}
