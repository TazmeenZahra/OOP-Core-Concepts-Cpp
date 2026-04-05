#include <iostream>
using namespace std;
class Circle;

class Rectangle
{
    int r_area;
    public:
    void r_setdata (int r)
    {
        r_area = r;
    }
    friend float lar (Rectangle, Circle);
};
class Circle
{
    int c_area;
    public:
    void c_setdata (int c)
    {
        c_area = c;
    }
    friend float lar (Rectangle, Circle);
};
float lar (Rectangle r, Circle c)
{
    if (r.r_area > c.c_area)
    {
        cout << "Area of Rectangle is greater then area of Circle: " << r.r_area << endl;
    }
    else
    {
        cout << "Area of Circle is greater then area of Rectangle: " << c.c_area << endl;
    }
    return r.r_area, c.c_area;
}
int main ()
{
    Rectangle r;
    r.r_setdata (20);
    Circle c;
    c.c_setdata (10);
    lar (r, c);
    return 0;
}
