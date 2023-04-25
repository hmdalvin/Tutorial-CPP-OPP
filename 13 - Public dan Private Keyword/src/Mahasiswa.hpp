#ifndef __MAHASISWA
#define __MAHASISWA

#include <iostream>
#include <string>

class Mahasiswa
{
public: // ini dapat dikases oleh siapa pun
    std::string namePublic;

private: // ini hanya dapat diakses oleh class itu sendiri
    std::string namePrivate;

// method constructor
public:
    // constructor selalu public
    Mahasiswa(const char* name);

    void showDisplay();

private:
    void showDisplayPrivate();
};

#endif