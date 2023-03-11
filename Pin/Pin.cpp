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
    public: void removeOrder(order order, int quantity) {
        for (int i = 0; i < this->orders.size(); i++) {
            if (this->orders[i].getName() == order.getName()) {
                this->orders[i].remove(quantity);
                if (this->orders[i].getQuantity() == 0) {
                    this->orders.erase(this->orders.begin() + i);
                }
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
    string tablename = "Window Table";
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
    string tablename = "Bar Stool 3";
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
    
    //Write your code here
    
    return 0;
}