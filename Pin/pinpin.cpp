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
    
    tablename = "Window Table";
    tableindex = -1;
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
    tablename = "Bar Stool 3";
    tableindex = -1;
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
    
    int choice;
    int Numtable;
    int NumOrder;
    cout << "1. Add Order" << endl;
    cout << "2. Remove Order" << endl;
    cout << "3. Add/Remove menu" << endl;
    cin >> choice;
    if(choice == 1) {
        for(int i = 0; i < tables.size(); i++) {
            if(tables[i].getIsAvailable() == false) {
            cout << i+1 <<". " << tables[i].getName() << endl;
            }
        }
        cout << "Choose table: ";
        cin >> Numtable;
        for(int i = 0; i < menus.size(); i++) {
            cout << i+1 <<". "<< menus[i].getName() << endl;
        }
        cout << "Choose Order: ";
        cin >> NumOrder;
        string ordername = menus[NumOrder-1].getName();
        int N;
        cout << "How many: ";
        cin >> N;
        tables[Numtable-1].addOrder(order(ordername,N));
        cout << "Add Order Complete" << endl;
    }
    else if(choice == 2){
        for(int i = 0; i < tables.size(); i++) {
            if(tables[i].getIsAvailable() == false) {
            cout << i+1 <<". " << tables[i].getName() << endl;
            }
        }
        cout << "Choose table: ";
        cin >> Numtable;
        for(int i = 0; i < tables[Numtable-1].getOrders().size(); i++) {
            cout << i+1 <<". "<< tables[Numtable-1].getOrders()[i].getName() << endl;
        }
        cout << "Choose Order: ";
        cin >> NumOrder;
        tables[Numtable-1].removeOrder(tables[Numtable-1].getOrders()[NumOrder-1]);
        cout << "Remove Order Complete" << endl;
    }
    else if(choice == 3){
        int choose;
        for(int i = 0; i < menus.size(); i++) {
            cout << i+1 <<". "<< menus[i].getName() << endl;
        }
        cout << "1. Add Menu" << endl;
        cout << "2. Remove Menu" << endl;
        cin >> choose;
        if(choose == 1) {
            string newmenu;
            int newprice;
            cout << "Enter new menu: ";
            cin >> newmenu;
            cout << "Enter new price: ";
            cin >> newprice;
            menus.push_back(menu(newmenu,newprice));
            cout << "Add Menu Complete" << endl;
        }
        if(choose == 2) {
            int Nummenu;
            for(int i = 0; i < menus.size(); i++) {
                cout << i+1 <<". "<< menus[i].getName() << endl;
            }
            cout << "Choose menu: ";
            cin >> Nummenu;
            menus.erase(menus.begin() + Nummenu-1);
            cout << "Remove Menu Complete" << endl;
        }
    }
    else {
        cout << "Invalid Input" << endl;
    }
    else if(choice == 3){
        int choose;
        for(int i = 0; i < menus.size(); i++) {
            cout << i+1 <<". "<< menus[i].getName() << endl;
        }
        cout << "1. Add Menu" << endl;
        cout << "2. Remove Menu" << endl;
        cin >> choose;
        if(choose == 1) {
            string newmenu;
            int newprice;
            cout << "Enter new menu: ";
            cin >> newmenu;
            cout << "Enter new price: ";
            cin >> newprice;
            menus.push_back(menu(newmenu,newprice));
            cout << "Add Menu Complete" << endl;
        }
        if(choose == 2) {
            int Nummenu;
            for(int i = 0; i < menus.size(); i++) {
                cout << i+1 <<". "<< menus[i].getName() << endl;
            }
            cout << "Choose menu: ";
            cin >> Nummenu;
            menus.erase(menus.begin() + Nummenu-1);
            cout << "Remove Menu Complete" << endl;
        }
        for(int i = 0; i < menus.size(); i++) {
            cout << i+1 <<". "<< menus[i].getName() << endl;
        }
    } 
    
    return 0;

}