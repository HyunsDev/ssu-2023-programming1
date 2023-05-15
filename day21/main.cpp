#include "phoneBook.h"

int main() {
    PhoneBook phoneBook;
    phoneBook.addPhone("John", "123456789");
    phoneBook.addPhone("Mary", "987654321");
    phoneBook.addPhone("Peter", "123123123");
    phoneBook.addPhone("John", "456456456");
    phoneBook.printPhones();
    phoneBook.findPhone("Mary");
    phoneBook.findPhone("John");
    phoneBook.deletePhone("Mary");
    phoneBook.deletePhone("Mary");
    phoneBook.printPhones();
    return 0;
}