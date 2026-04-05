#include <iostream>
using namespace std;

class Order 
{
private:
    string name;               
    mutable string placedOrder; 
    int tableNo;               
    mutable int bill;           
    mutable int orderChanges;

public:
    Order(string custName, int table, string order, int amount) 
    {
        name = custName;
        tableNo = table;
        placedOrder = order;
        bill = amount;
        orderChanges = 0;
    }
   
    void changeOrder(string newOrder, int newBill) const 
    {
        if (orderChanges == 0) 
        { 
            placedOrder = newOrder; 
            bill = newBill;        
            orderChanges++;     
            cout << "Order changed successfully to: " << placedOrder << endl;
        } 
        else 
        {
            cout << "Cannot change order! Modification limit reached.\n";
        }
    }

    void displayOrder() const 
    {
        cout << "Customer: " << name << "\nTable No: " << tableNo << endl;
        cout << "Order: " << placedOrder << "\nBill: $" << bill << endl;
    }
};

int main() 
{
    Order myOrder("Ali", 5, "Pasta", 15);

    cout << "Initial Order Details:\n";
    myOrder.displayOrder();

    cout << "\nTrying to change order...\n";
    myOrder.changeOrder("Pizza", 20);

    cout << "\nUpdated Order Details:\n";
    myOrder.displayOrder();

    cout << "\nTrying another order change...\n";
    myOrder.changeOrder("Burger", 25);

    return 0;
}
