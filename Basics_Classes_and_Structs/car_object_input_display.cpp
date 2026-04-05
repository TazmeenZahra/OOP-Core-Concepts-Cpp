#include <iostream>
using namespace std;

void display (string type, string model, string color, int speed)
{
    cout << "Car Type: " << type << endl;
    cout << "Car Model: " << model << endl;
    cout << "Car Color: " << color << endl;
    cout << "Car speed: " << speed << " km/h" << endl;
    cout << endl;
}

int main()
{
    string car1type = "Mercedes Benz";
    string car1model = "2017";
    string car1color = "Black";
    int car1speed = 280;

    display (car1type, car1model, car1color, car1speed);

    string car2type = "Austin Martin";
    string car2model = "2015";
    string car2color = "Grey";
    int car2speed = 260;

    display (car2type, car2model, car2color, car2speed);

    string car3type = "Porche";
    string car3model = "2014";
    string car3color = "Silver";
    int car3speed = 250;

    display (car3type, car3model, car3color, car3speed);

    return 0;
}
