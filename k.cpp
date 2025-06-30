#include <bits/stdc++.h>
//#include <iostream>
 
using namespace std;
 
//Create a simple ECommerce model: User places an Order that contains multiple Items. Write classes for each, and show how a user can place an order and view order summary.

class Item
{
private:
    string name;
    double price;
    int quantity;

public:
Item(string name, double price,int quantity)
{
    this -> name = name;
    this -> price = price;
     this -> quantity = quantity;
}
double getprice()const
{
    return price * quantity;
}

void display() const {
        cout << name << " - Rs. " << price 
             << " x " << quantity 
             << " = Rs. " << getprice() << endl;
    }
   
};


class Order
{
private:
   vector <Item> Items;
public:
void additem(const Item& item){
    Items.push_back(item);
}
 void displaySummary() const {
        if (Items.empty()) {
            cout << "Your order is empty." << endl;
            return;
        }

        cout << "Order Summary:\n";
        double total = 0;
        for (const Item& item : Items) {
            item.display();
            total += item.getprice();
        }
        cout << "Total Amount: Rs. " << total << endl;
    }
   
};

class User{
    private:
    string username;
    Order order;
    public:

    User(string name) : username(name) {}

    void placeItem(const Item& item) {
        order.additem(item);
    }

    void viewOrder() const {
        cout << "\nOrder for " << username << ":\n";
        order.displaySummary();
    }

};



int main()
{

    User user("Ankush");

    user.placeItem(Item("Laptop", 50000, 1));
    user.placeItem(Item("Mouse", 800, 2));
    user.placeItem(Item("Keyboard", 1200, 1));

    user.viewOrder();

  return 0;
}