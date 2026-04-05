#include <iostream>
using namespace std;
class Car
{
    int horsepower;
    public:
    void setpower (int h)
    {
        horsepower = h;
        cout << "Initial horsepower: " << horsepower << endl;
    }
    friend class Engine;
};
class Engine
{
    public:
    void increment (Car &c)
    {
        c.horsepower += 150;
        cout << "Horsepower after increment: " << c.horsepower << endl;
    }
};
int main ()
{
    Car c;
    c.setpower (100);
    Engine e;
    e.increment (c);
    return 0;
}
