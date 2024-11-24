#pragma once

class Contact {
private:
    char phone[15];
    char location[50];
    char countryName[30];

public:
    Contact() {
        phone[0] = '\0';
        location[0] = '\0';
        countryName[0] = '\0';
    }

    void setPhoneNumber(const char* num);
    void setPlace(const char* place);
    void setCountry(const char* country);

    void print() const;
};



