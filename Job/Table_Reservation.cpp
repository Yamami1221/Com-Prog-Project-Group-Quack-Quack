#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

class table {
    private: string name;
    private: bool isAvailable;
    public: table(string name) {
        this->name = name;
        this->isAvailable = true;
    }
    public: string getName() {
        return this->name;
    }

    public: bool getIsAvailable() {
        return this->isAvailable;
    }
    public: void setIsAvailable(bool isAvailable) {
        this->isAvailable = isAvailable;
    }
};

vector<table> tables;

int main()
{   ifstream file;
    file.open("test.txt");
    string line;
    while (getline(file, line)) {
        tables.push_back(table(line));
    }
    int choice;
    do{
    file.close();
    cout << "---------------Table Reservation---------------" << endl;
    cout << "Reserve [1]" << endl;
    cout << "Cancel [2]" << endl;
    cout << "Edit [3]" << endl;
    cout << "Exit [0]" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Choose: ";
    cin >> choice;
    int tableChoice;
    if (choice == 1)
{
    system("cls");
    do{
    cout << "-----------------Reserve Table-----------------" << endl;
    cout << "Table Available: " << endl;
    for (int i = 0; i < tables.size(); i++) {
        if (tables[i].getIsAvailable()) {
            cout << tables[i].getName() << " " << "[" << i+1 << "]"  << endl;
        }
}
        cout << "Exit [0]" << endl;
        cout << "-----------------------------------------------" << endl;
        cout << "Choose Table: ";
        int tableChoice;
        cin >> tableChoice;
        if(tableChoice == 0)
        {
            system("cls");
            break;
        }
        tables[tableChoice-1].setIsAvailable(false);
        system("cls");
}
while (tableChoice != 0);

}
    else if (choice == 2){
        system ("cls");
        int tableChoice;
    do{
    cout << "-----------------Cancel Table-----------------" << endl;
    cout << "Table Reserved: " << endl;
    for (int i = 0; i < tables.size(); i++) {
        if (!tables[i].getIsAvailable()) {
            cout << tables[i].getName() << " " << "[" << i+1 << "]"  << endl;
        }
    }
        cout << "Exit [0]" << endl;
        cout << "-----------------------------------------------" << endl;
        cout << "Choose Table: ";
        int tableChoice;
        cin >> tableChoice;
        if(tableChoice == 0)
        {
            system("cls");
            break;
        }
        tables[tableChoice-1].setIsAvailable(true);
        system("cls");
}
while (tableChoice != 0);
    }
    else if (choice == 3){
        system ("cls");
        int tableChoice;
    do{
    cout << "-----------------Edit Table-----------------" << endl;
    cout << "add table [1]" << endl;
    cout << "delete table [2]" << endl;
    cout << "EXIT [0]" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Choose: ";
    int tableChoice;
    cin >> tableChoice;
    if (tableChoice == 0)
    {
        system("cls");
        break;
    }
    
    if(tableChoice == 1)
    {
        string name;
        cout << "Enter Table Name: ";
        cin.ignore();
        getline(cin, name);
        tables.push_back(table(name));
        ofstream file;
        file.open("test.txt");
        for (int i = 0; i < tables.size(); i++) {
            file << tables[i].getName() << endl;
        }

    }
    else if(tableChoice == 2)
    {
        int tableChoice;
        cout << "All Table: " << endl;
        for (int i = 0; i < tables.size(); i++) {
            cout << tables[i].getName() << " " << "[" << i+1 << "]"  << endl;
        }
        cout << "Enter Table Number: ";
        cin >> tableChoice;
        tables.erase(tables.begin() + tableChoice-1);
        ofstream file;
        file.open("test.txt");
        for (int i = 0; i < tables.size(); i++) {
            file << tables[i].getName() << endl;
        }
    }
    system("cls");

    }while (tableChoice != 0);

    }
    else if (choice == 0){
        break;
    }
    else {
        cout << "Invalid Input" << endl;
    }}while(choice != 0);
    
    return 0;
    }