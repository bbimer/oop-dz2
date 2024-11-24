#pragma once

class Student
{
private:
	char PIB[20];
	char dateOfBirth[20];
	char contact[20];
	char college[20];

public:
	Student() {
		PIB[0] = '\0';
		dateOfBirth[0] = '\0';
		contact[0] = '\0';
		college[0] = '\0';
	}

	void setPIB(const char* pib);
	void setDateOfBirth(const char* date);
	void setContact(const char* number);
	void setCollege(const char* name);

	void print() const;
};