#include <iostream>
#include "contact.h"
#include "college.h"
#include "studen.h"

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

    Student one;
    one.setPIB("L");
    one.setDateOfBirth("2004");
    one.setContact("1(577)567-9874");
    one.setCollege("Mechnikova");
    one.print();

    return 0;
}
