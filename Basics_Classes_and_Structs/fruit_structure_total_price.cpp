#include <iostream>
using namespace std;
struct Fruit {
    string name;
    int price;
    int quantity;
};

void total (Fruit fruits[5], int Grand_total)
{
    int totalprice;
    for (int i = 0; i < 5; i ++)
    {
        totalprice = fruits[i].quantity * fruits[i].price;
        cout << "Total Price of fruit " << i + 1 << ": " << totalprice << endl;
        Grand_total += totalprice;
        cout << endl;
    }
    cout << "Grand Total of all fruits bought is: " << Grand_total;
    return;
}

int main()
{
    Fruit fruits[5];
    for (int i = 0; i < 5; i ++)
    {
        cout << "Enter fruit " << i + 1 << " data: " << endl;
        cout << "Enter fruit name: "; cin >> fruits[i].name;
        cout << "Enter fruit price: "; cin >> fruits[i].price;
        cout << "Enter fruit quantity: "; cin >> fruits[i].quantity;
        cout << endl;
    }
    int Grand_total = 0;
    total (fruits, Grand_total);
    return 0;
}
