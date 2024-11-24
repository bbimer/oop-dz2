#include "college.h"
#include <iostream>
using namespace std;

void College::setContact(const char* contact1) {

	for (size_t i = 0; i < sizeof(contact); ++i)
	{
		contact[i] = contact1[i];
	}
}

void College::setName(const char* name1) {

	for (size_t i = 0; i < sizeof(name); ++i)
	{
		name[i] = name1[i];
	}
}

void College::print() const {
	cout << endl << "College contact: " << contact << endl;
	cout << "College name: " << name << endl;
}
