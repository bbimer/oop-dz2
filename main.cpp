#include <iostream>
#include "contact.h"
#include "college.h"

int main() {
    Contact contact;

    contact.setPhoneNumber("1(555)555-1234");
    contact.setPlace("Strelkov street 11");
    contact.setCountry("Canada");
    contact.print();

    College col;
    col.setContact("1(565)676-7264");
    col.setName("Kaspersky");
    col.print();

    return 0;
}
