#include <iostream>
using namespace std;
class Polygon
{
    public:
    float length;
    float *width;

    Polygon (float l, float w)
    {
        length = l; 
        width = new float(w);
    }
    void display ()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << *width << endl;
    }

};
int main()
{
    Polygon one (15, 20);
    Polygon two = one;

    cout << "Before Modification: " << endl;
    cout << "First object: " << endl;
    one.display();
    cout << "Second object: " << endl;
    two.display();
    cout << endl;

    *one.width = 35;

    cout << "After Modification: " << endl;
    cout << "First object: " << endl;
    one.display();
    cout << "Second object: " << endl;
    two.display();
}
