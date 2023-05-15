#include "phoneBook.h"

PhoneItem::PhoneItem(string a, string b) {
    name = a;
    number = b;
};

PhoneBook::PhoneBook() { phoneItems = vector<PhoneItem>(); }

void PhoneBook::printPhones() {
    for (PhoneItem item : phoneItems) {
        cout << item.name << " " << item.number << endl;
    }
}

void PhoneBook::addPhone(string name, string number) {
    PhoneItem item(name, number);
    phoneItems.push_back(item);
}

void PhoneBook::findPhone(string name) {
    for (PhoneItem item : phoneItems) {
        if (item.name == name) {
            cout << item.number << endl;
            return;
        }
    }
    cout << "Not found" << endl;
}

void PhoneBook::deletePhone(string name) {
    for (int i = 0; i < phoneItems.size(); i++) {
        if (phoneItems[i].name == name) {
            phoneItems.erase(phoneItems.begin() + i);
            return;
        }
    }
    cout << "Not found" << endl;
}