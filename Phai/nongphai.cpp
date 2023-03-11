#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

class menu {
    private: string name;
    private: int price;
    public: menu(string name, int price) {
        this->name = name;
        this->price = price;
    }
    public: int getPrice() {
        return this->price;
    }
    public: string getName() {
        return this->name;
    }
};

class order {
    private: string name;
    private: int quantity;
    public: order(string name, int quantity) {
        this->name = name;
        this->quantity = quantity;
    }
    public: string getName() {
        return this->name;
    }
    public: int getQuantity() {
        return this->quantity;
    }
    public: void add(int quantity) {
        this->quantity += quantity;
    }
    public: void remove() {
        this->quantity--;
    }
    public: void remove(int quantity) {
        this->quantity -= quantity;
    }
    public: ~order() {
        this->quantity = 0;
    }
};

vector<menu> menus;

class table {
    private: string name;
    private: vector<order> orders;
    private: bool isAvailable;
    public: table(string name) {
        this->name = name;
        this->isAvailable = true;
    }
    public: string getName() {
        return this->name;
    }
    public: vector<order> getOrders() {
        return this->orders;
    }
    public: void setTableStatus(bool isAvailable) {
        this->isAvailable = isAvailable;
    }
    public: void addOrder(order order) {
        for (int i = 0; i < this->orders.size(); i++) {
            if (this->orders[i].getName() == order.getName()) {
                this->orders[i].add(order.getQuantity());
                return;
            }
        }
        this->orders.push_back(order);
    }
    public: void removeOrder(order order) {
        for (int i = 0; i < this->orders.size(); i++) {
            if (this->orders[i].getName() == order.getName()) {
                this->orders.erase(this->orders.begin() + i);
            }
        }
    }
    public: int total() {
        int total = 0;
        for (int i = 0; i < this->orders.size(); i++) {
            for (int j = 0; j < menus.size(); j++) {
                if (this->orders[i].getName() == menus[j].getName()) {
                    total += this->orders[i].getQuantity() * menus[j].getPrice();
                }
            }
        }
        return total;
    }
    public: bool getIsAvailable() {
        return this->isAvailable;
    }
    public: ~table() {
        this->orders.clear();
    }
};

vector<table> tables;

int main() {
    ifstream tabledata("table.txt");
    ifstream menudata("menu.txt");
    string textline;
    while (getline(tabledata, textline)) {
        tables.push_back(table(textline));
    }
    while (getline(menudata, textline)) {
        menus.push_back(menu(textline.substr(0, textline.find(" ")), stoi(textline.substr(textline.find(" ") + 1))));
    }
    tabledata.close();
    menudata.close();
    string tablename = "Table 2";
    int tableindex = -1;
    for (int i = 0; i < tables.size(); i++) {
        if (tables[i].getName() == tablename) {
            tableindex = i;
            tables[i].setTableStatus(false);
        }
    }
    if (tableindex == -1) {
        cout << "Table not found" << endl;
        return 0;
    }
    tables[tableindex].addOrder(order("Soft-drinks", 1));
    tables[tableindex].addOrder(order("Soft-drinks", 1));
    tables[tableindex].addOrder(order("Soft-drinks", 1));
    tables[tableindex].addOrder(order("Coffee", 1));
    tables[tableindex].addOrder(order("Cheesecake", 1));
    tables[tableindex].addOrder(order("Grilled-salmon", 1));
    tables[tableindex].addOrder(order("Mushroom-risotto", 1));
    tables[tableindex].addOrder(order("Mushroom-risotto", 1));
    tables[tableindex].addOrder(order("Fish-and-chips", 5));

    cout << "Table: " << tables[tableindex].getName() << endl;
    cout << "---------------------------------" << endl;
    cout << "The total should be: " << tables[tableindex].total() << endl;
    cout << "And should have: " << endl;
    cout << "Soft-drinks x 3" << endl;
    cout << "Coffee x 1" << endl;
    cout << "Cheesecake x 1" << endl;
    cout << "Grilled-salmon x 1" << endl;
    cout << "Mushroom-risotto x 2" << endl;
    cout << "Fish-and-chips x 5" << endl;
    cout << "---------------------------------" << endl;

    string tablename = "Booth 1";
    int tableindex = -1;
    for (int i = 0; i < tables.size(); i++) {
        if (tables[i].getName() == tablename) {
            tableindex = i;
            tables[i].setTableStatus(false);
        }
    }
    if (tableindex == -1) {
        cout << "Table not found" << endl;
        return 0;
    }
    tables[tableindex].addOrder(order("Spring-rolls", 5));
    tables[tableindex].addOrder(order("Nachos", 8));
    tables[tableindex].addOrder(order("Soft-drinks", 10));
    tables[tableindex].addOrder(order("Coffee", 5));
    tables[tableindex].addOrder(order("Cheesecake", 7));
    tables[tableindex].addOrder(order("Grilled-salmon", 2));
    tables[tableindex].addOrder(order("Vegetarian-stir-fry", 1));
    tables[tableindex].addOrder(order("Vegetarian-stir-fry", 1));
    tables[tableindex].addOrder(order("Fruit-tart", 5));

    cout << "Table: " << tables[tableindex].getName() << endl;
    cout << "---------------------------------" << endl;
    cout << "The total should be: " << tables[tableindex].total() << endl;
    cout << "And should have: " << endl;
    cout << "Spring-rolls x 5" << endl;
    cout << "Nachos x 8" << endl;
    cout << "Soft-drinks x 10" << endl;
    cout << "Coffee x 5" << endl;
    cout << "Cheesecake x 7" << endl;
    cout << "Grilled-salmon x 2" << endl;
    cout << "Vegetarian-stir-fry x 2" << endl;
    cout << "Fruit-tart x 5" << endl;
    cout << "---------------------------------" << endl;
    //Write your code here
    
    return 0;
}