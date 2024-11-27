#include "contact.h"
#include <iostream>
using namespace std;

void Contact::print() const {
	cout << "===============================" << endl;
	cout << "Phone: " << this->phone << endl;
	cout << "Location: " << this->loc << endl;
	cout << "Country: " << this->cntr << endl;
	cout << "===============================" << endl << endl;
}



