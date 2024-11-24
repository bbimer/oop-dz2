#include "contact.h"
#include <iostream>
using namespace std;

void Contact::setPhoneNumber(const char* num) {

    for (size_t i = 0; i < sizeof(phone); i++)
    {
        phone[i] = num[i];
    }
}

void Contact::setPlace(const char* place) {

    for (size_t i = 0; i < sizeof(location); i++)
    {
        location[i] = place[i];
    }
}

void Contact::setCountry(const char* country) {

    for (size_t i = 0; i < sizeof(countryName); i++)
    {
        countryName[i] = country[i];
    }
}


void Contact::print() const {
    cout << "Phone number: " << phone << endl;
    cout << "Location: " << location << endl;
    cout << "Country: " << countryName << endl;
}
