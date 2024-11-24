#include "studen.h"
#include <iostream>
using namespace std;


void Student::setPIB(const char* pib) {
    for (size_t i = 0; i < sizeof(PIB); i++) {
        PIB[i] = pib[i];
    }
}

void Student::setDateOfBirth(const char* date) {
    for (size_t i = 0; i < sizeof(dateOfBirth); i++) {
        dateOfBirth[i] = date[i];
    }
}

void Student::setContact(const char* number) {
    for (size_t i = 0; i < sizeof(contact); i++) {
        contact[i] = number[i];
    }
}

void Student::setCollege(const char* name) {
    for (size_t i = 0; i < sizeof(college); i++) {
        college[i] = name[i];
    }
}


void Student::print() const {
    cout << endl << "PIB: " << PIB << endl;
    cout << "Date of birth: " << dateOfBirth << endl;
    cout << "contacts: " << contact << endl;
    cout << "college: " << college << endl;
}

