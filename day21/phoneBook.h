#include <iostream>
#include <string>
#include <vector>

using namespace std;

class PhoneItem {
   public:
    string name;
    string number;

   public:
    PhoneItem(string a, string b);
};

class PhoneBook {
   private:
    vector<PhoneItem> phoneItems;

   public:
    PhoneBook();
    void printPhones();
    void addPhone(string name, string number);
    void findPhone(string name);
    void deletePhone(string name);
};
