#pragma once

class College
{
private:
    char contact[16];
    char name[16];

public:
    College() {
        contact[0] = '\0';
        name[0] = '\0';
    }

    void setContact(const char* contact1);
    void setName(const char* name1);

    void print() const;
};