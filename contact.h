#pragma once
#include <cstring>

class Contact
{
private:
	static const size_t size = 20;
	char phone[size] = {};
	char loc[size] = {};
	char cntr[size] = {};

public:
	Contact(const char* phone, const char* loc, const char* cntr) {
		if (phone)
		{
			strncpy(this->phone, phone, size - 1);
			this->phone[size - 1] = '\0';
		}
		if (loc)
		{
			strncpy(this->loc, loc, size - 1);
			this->loc[size - 1] = '\0';
		}
		if (cntr)
		{
			strncpy(this->cntr, cntr, size - 1);
			this->cntr[size - 1] = '\0';
		}
	};

	void print() const;
};
