#include <iostream>
#include <string>

using namespace std;

// belajar tentang friend class
class PersegiPanjang;

class Persegi
{
    friend class PersegiPanjang;

private:
    double sisi;

public:
    Persegi(double sisi)
    {
        this->sisi = sisi;
    }

    double luas()
    {
        return this->sisi * this->sisi;
    }
};

class PersegiPanjang
{
    friend class Persegi;

private:
    double panjang;
    double lebar;

public:
    PersegiPanjang(double panjang, double lebar)
    {
        this->panjang = panjang;
        this->lebar = lebar;
    }

    double luas()
    {
        return this->panjang * this->lebar;
    }

    bool isLebihPanjang(const Persegi &obj)
    {
        bool isTrue = this->panjang > obj.sisi;
        return isTrue;
    }
};

int main(int argc, char const *argv[])
{
    // buat object
    Persegi persegi = Persegi(5);

    PersegiPanjang kotak = PersegiPanjang(5, 10);

    cout << "Luas persegi = " << persegi.luas() << endl;
    cout << "luas kotak = " << kotak.luas() << endl;
    bool logika = kotak.isLebihPanjang(persegi);
    cout << "apakah kotak lebih panjang dari persegi = " << logika << endl;
    return 0;
}
