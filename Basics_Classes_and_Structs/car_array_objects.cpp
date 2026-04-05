#include <iostream>
using namespace std;
class car {
    public:
    string type;
    string model;
    string color;
    int speed;

    void display(car mycar[3])
    {
        for (int i = 0; i < 3; i ++)
        {
            cout << "Car " << i + 1 << " details: " << endl;
            cout << "Car " << i + 1 << " type: " << mycar[i].type << endl;
            cout << "Car " << i + 1 << " model: " << mycar[i].model << endl;
            cout << "Car " << i + 1 << " color: " << mycar[i].color << endl;
            cout << "Car " << i + 1 << " speed: " << mycar[i].speed << " km/h" << endl;
        }
        cout << endl;
        return;
    }
};
int main() 
{
    car mycar[3];
    mycar[0].type = "Mercedes Benz";
    mycar[0].model = "2017";
    mycar[0].color = "Black";
    mycar[0].speed = 280;

    mycar[1].type = "Austin Martin";
    mycar[1].model = "2015";
    mycar[1].color = "Grey";
    mycar[1].speed = 260;

    mycar[2].type = "Porche";
    mycar[2].model = "2014";
    mycar[2].color = "Silver";
    mycar[2].speed = 250;

    mycar[3].display(mycar);
    return 0;
}
