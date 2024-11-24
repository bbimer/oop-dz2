#include <iostream>
#include "contact.h"

int main() {
    Contact contact;

    contact.setPhoneNumber("1(555)555-1234");
    contact.setPlace("Strelkov street 11");
    contact.setCountry("Canada");
    contact.print();

    return 0;
}
