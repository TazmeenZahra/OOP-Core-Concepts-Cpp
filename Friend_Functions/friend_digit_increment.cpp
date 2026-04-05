#include <iostream>
using namespace std;
class Digit
{
    int value;
    public:
    void setdata (int v)
    {
        value = v;
    }
    friend int increment (Digit d);
};
int increment (Digit d)
{
    cout << "Value before Increment: " << d.value << endl;
    for (int i = 0; i < 1; i ++)
    {
        d.value++;
        cout << "Value after Increment: " << d.value << endl;
    }
    return d.value;
}
int main ()
{
    Digit d;
    d.setdata (20);
    increment (d);
    return 0;
}
